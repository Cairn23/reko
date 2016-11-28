﻿#region License
/* 
 * Copyright (C) 1999-2016 Pavel Tomin.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

using Reko.Core;
using Reko.Gui.Windows.Controls;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Reko.Gui.Windows
{
    /// <summary>
    /// Manages a preview window that pops up when the user hovers over an
    /// address.
    /// </summary>
    public class PreviewInteractor
    {
        private IServiceProvider services;
        private MixedCodeDataControl mixedCodeDataControl;
        private Control previewWindow;
        private bool insidePreview;
        private Address addressPreview;
        private LayoutSpan previewSpan;
        private Timer previewTimer;
        private Program program;

        public PreviewInteractor(
            IServiceProvider services,
            Program program,
            Timer previewTimer,
            MixedCodeDataControl mixedCodeDataControl)
        {
            this.services = services;
            this.previewTimer = previewTimer;
            this.program = program;
            this.mixedCodeDataControl = mixedCodeDataControl;

            this.mixedCodeDataControl.MouseDown += MixedCodeDataControl_MouseDown;
            this.mixedCodeDataControl.SpanEnter += MixedCodeDataControl_SpanEnter;
            this.mixedCodeDataControl.SpanLeave += MixedCodeDataControl_SpanLeave;
            this.previewTimer.Tick += PreviewTimer_Tick;
        }

        private void MixedCodeDataControl_MouseDown(object sender, MouseEventArgs e)
        {
            if (previewWindow != null)
            {
                DestroyPreviewWindow();
            }
        }

        private void MixedCodeDataControl_SpanLeave(object sender, SpanEventArgs e)
        {
            if (!insidePreview)
                DestroyPreviewWindow();
        }

        private void MixedCodeDataControl_SpanEnter(object sender, SpanEventArgs e)
        {
            if (previewWindow != null)
            {
                // Preview window already visible.
                return;
            }

            if (e.Span.Style == null || !e.Span.Style.Contains("dasm-addrText"))
                return;
            this.addressPreview = e.Span.Tag as Address;
            if (this.addressPreview == null)
                return;

            // Start the timer; when it ticks, it will pop up the window.
            this.previewTimer.Enabled = true;
            this.previewSpan = e.Span;
        }

        private void PreviewTimer_Tick(object sender, EventArgs e)
        {
            // Timer needs to be disabled now so we don't get more ticks.
            this.previewTimer.Enabled = false;

            var rcF = previewSpan.ContentExtent;
            var pt = new System.Drawing.Point(100, (int)rcF.Bottom);

            var nested = new MixedCodeDataControl
            {
                Model = ((MixedCodeDataModel)this.mixedCodeDataControl.Model).Clone(),
                Program = this.mixedCodeDataControl.Program,      //$TODO: would be nice to avoid triggering recalc
                Dock = DockStyle.Fill,
                Services = this.services,
                StyleClass = this.mixedCodeDataControl.StyleClass,
                Padding = new Padding(3),
            };
            nested.VScrollBar.Visible = false;

            var frame = new Panel
            {
                AutoSize = false,
                BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle,
                Width = 500,
                Height = 200,
                Location = pt,
                Controls = {
                   nested
                }
            };
            this.mixedCodeDataControl.Controls.Add(frame);
            this.previewWindow = frame;
            nested.TopAddress = this.addressPreview;

            nested.MouseLeave += Lbl_MouseLeave;
            nested.MouseEnter += Lbl_MouseEnter;
            this.insidePreview = false;
        }

        private void Lbl_MouseLeave(object sender, EventArgs e)
        {
            DestroyPreviewWindow();
        }

        private void Lbl_MouseEnter(object sender, EventArgs e)
        {
            insidePreview = true;
        }

        private void DestroyPreviewWindow()
        {
            this.previewTimer.Enabled = false;
            if (previewWindow == null)
                return;
            this.mixedCodeDataControl.Controls.Remove(previewWindow);
            previewWindow.Dispose();
            previewWindow = null;
            insidePreview = false;
            previewSpan = null;
            addressPreview = null;

        }
    }
}