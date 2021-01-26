#ifndef TEST_WXWIDGETS_MAINFRAME_H
#define TEST_WXWIDGETS_MAINFRAME_H

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

enum { ID_QUIT = wxID_EXIT, ID_ABOUT = wxID_ABOUT };

class MainFrame : public wxFrame {
public:
  MainFrame(const wxString &title);

  void OnQuit(wxCommandEvent &event);
  void OnAbout(wxCommandEvent &event);

private:
  void _create_menubar();
  void _create_statusbar();
  void _connect_events();
  void _create_controls();

protected:
  wxTextCtrl *m_text_ctrl;
};

#endif
