// generated by Fast Light User Interface Designer (fluid) version 1.0100

#ifndef Fl_Help_Dialog_H
#define Fl_Help_Dialog_H
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Help_View.H>
#include <FL/Fl_Button.H>

class FL_EXPORT Fl_Help_Dialog {
  int index_;
  int max_;
  int line_[100];
  char file_[100][256];
public:
  Fl_Help_Dialog();
private:
  Fl_Double_Window *window_;
  Fl_Help_View *view_;
  inline void cb_view__i(Fl_Help_View*, void*);
  static void cb_view_(Fl_Help_View*, void*);
  inline void cb_Close_i(Fl_Button*, void*);
  static void cb_Close(Fl_Button*, void*);
  Fl_Button *back_;
  inline void cb_back__i(Fl_Button*, void*);
  static void cb_back_(Fl_Button*, void*);
  Fl_Button *forward_;
  inline void cb_forward__i(Fl_Button*, void*);
  static void cb_forward_(Fl_Button*, void*);
  Fl_Button *smaller_;
  inline void cb_smaller__i(Fl_Button*, void*);
  static void cb_smaller_(Fl_Button*, void*);
  Fl_Button *larger_;
  inline void cb_larger__i(Fl_Button*, void*);
  static void cb_larger_(Fl_Button*, void*);
public:
  ~Fl_Help_Dialog();
  int h();
  void hide();
  void load(const char *f);
  void position(int xx, int yy);
  void resize(int xx, int yy, int ww, int hh);
  void show();
  void show(int argc, char **argv);
  void textsize(uchar s);
  uchar textsize();
  void topline(const char *n);
  void topline(int n);
  int visible();
  int w();
  int x();
  int y();
};
#endif
