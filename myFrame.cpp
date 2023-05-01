#include "myFrame.h"

myFrame::myFrame(const string& title) : wxFrame(nullptr,wxID_ANY,title)
{
	wxPanel* _panel = new wxPanel(this);

	wxButton* _button = new wxButton(_panel, wxID_ANY, "test button", wxPoint(150, 50), wxSize(160, 90));

	wxCheckBox* _check = new wxCheckBox(_panel, wxID_ANY, "check", wxPoint(500, 50));

	wxStaticText* _text = new wxStaticText(_panel, wxID_ANY, "static text, cannt be edited", wxPoint(150, 200));
}