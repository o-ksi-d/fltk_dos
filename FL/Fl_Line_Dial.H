//
// "$Id: Fl_Line_Dial.H,v 1.4.2.3.2.1 2002/01/01 15:11:27 easysw Exp $"
//
// Line dial header file for the Fast Light Tool Kit (FLTK).
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

#ifndef Fl_Line_Dial_H
#define Fl_Line_Dial_H

#include "Fl_Dial.H"

class Fl_Line_Dial : public Fl_Dial {
public:
    Fl_Line_Dial(int x,int y,int w,int h, const char *l = 0)
	: Fl_Dial(x,y,w,h,l) {type(FL_LINE_DIAL);}
};

#endif

//
// End of "$Id: Fl_Line_Dial.H,v 1.4.2.3.2.1 2002/01/01 15:11:27 easysw Exp $".
//
