//
// "$Id: Fl_Tooltip.H,v 1.16.2.8 2002/05/13 05:05:11 spitzak Exp $"
//
// Tooltip header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2002 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems to "fltk-bugs@fltk.org".
//

#ifndef Fl_Tooltip_H
#define Fl_Tooltip_H

#include <FL/Fl.H>
#include <FL/Fl_Widget.H>

class FL_EXPORT Fl_Tooltip {
public:
  static float delay() { return delay_; }
  static void delay(float f) { delay_ = f; }
  static int enabled() { return enabled_; }
  static void enable(int b = 1) { enabled_ = b;}
  static void disable() { enabled_ = 0; }
  static void (*enter)(Fl_Widget* w);
  static void enter_area(Fl_Widget* w, int X, int Y, int W, int H, const char* tip);
  static void (*exit)(Fl_Widget *w);

  static int font() { return font_; }
  static int size() { return size_; }
  static void font(int i) { font_ = i; }
  static void size(int s) { size_ = s; }
  static void color(unsigned c) { color_ = c; }
  static Fl_Color color() { return (Fl_Color)color_; }
  static void textcolor(unsigned c) { textcolor_ = c; }
  static Fl_Color textcolor() { return (Fl_Color)textcolor_; }
private:
  static float delay_;
  static int enabled_;
  static unsigned color_;
  static unsigned textcolor_;
  static int font_;
  static int size_;
};

#endif

//
// End of "$Id: Fl_Tooltip.H,v 1.16.2.8 2002/05/13 05:05:11 spitzak Exp $".
//
