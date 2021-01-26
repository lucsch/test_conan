
#include "mainframe.h"

MainFrame::MainFrame(const wxString &title) : wxFrame(NULL, wxID_ANY, title) {
  // SetIcon(wxICON(sample));
  _create_menubar();
  _create_statusbar();
  _connect_events();
}

void MainFrame::_connect_events() {
  Bind(wxEVT_MENU, &MainFrame::OnQuit, this, ID_QUIT);
  Bind(wxEVT_MENU, &MainFrame::OnAbout, this, ID_ABOUT);
}

void MainFrame::_create_statusbar() {
  CreateStatusBar(2);
  SetStatusText("Welcome to wxWidgets!");
}

void MainFrame::_create_menubar() {
  wxMenu *fileMenu = new wxMenu;
  wxMenu *helpMenu = new wxMenu;
  helpMenu->Append(ID_ABOUT, "&About\tF1", "Show about dialog");
  fileMenu->Append(ID_QUIT, "E&xit\tAlt-X", "Quit this program");

  wxMenuBar *menuBar = new wxMenuBar();
  menuBar->Append(fileMenu, "&File");
  menuBar->Append(helpMenu, "&Help");
  SetMenuBar(menuBar);
}

void MainFrame::OnQuit(wxCommandEvent &WXUNUSED(event)) { Close(true); }

void MainFrame::OnAbout(wxCommandEvent &WXUNUSED(event)) {
  wxMessageBox(wxString::Format("Welcome to %s!\n"
                                "\n"
                                "This is the minimal wxWidgets sample\n"
                                "running under %s.",
                                wxVERSION_STRING, wxGetOsDescription()),
               "About wxWidgets minimal sample", wxOK | wxICON_INFORMATION,
               this);
}
