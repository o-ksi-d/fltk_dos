//
// "$Id: Fl_Return_Button.H,v 1.5.2.3.2.3 2002/08/14 16:49:38 easysw Exp $"
//
// Return button header file for the Fast Light Tool Kit (FLTK).
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

#ifndef Fl_Return_Button_H
#define Fl_Return_Button_H
#include "Fl_Button.H"

class FL_EXPORT Fl_Return_Button : public Fl_Button {
protected:
  void draw();
public:
  int handle(int);
  Fl_Return_Button(int X, int Y, int W, int H,const char *l=0)
    : Fl_Button(X,Y,W,H,l) {}
};

#endif

//
// End of "$Id: Fl_Return_Button.H,v 1.5.2.3.2.3 2002/08/14 16:49:38 easysw Exp $".
//
