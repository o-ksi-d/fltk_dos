//
// "$Id: Fl_Pack.H,v 1.5.2.3.2.2 2002/08/14 16:49:38 easysw Exp $"
//
// Pack header file for the Fast Light Tool Kit (FLTK).
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

#ifndef Fl_Pack_H
#define Fl_Pack_H

#include <FL/Fl_Group.H>

class FL_EXPORT Fl_Pack : public Fl_Group {
  int spacing_;
public:
  enum { // values for type(int)
    VERTICAL = 0,
    HORIZONTAL = 1
  };
  void draw();
  Fl_Pack(int x,int y,int w ,int h,const char *l = 0);
  int spacing() const {return spacing_;}
  void spacing(int i) {spacing_ = i;}
  uchar horizontal() const {return type();}
};

#endif

//
// End of "$Id: Fl_Pack.H,v 1.5.2.3.2.2 2002/08/14 16:49:38 easysw Exp $".
//
