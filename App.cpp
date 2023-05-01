#include <wx\wx.h>
#include "myFrame.h"

#include "App.h"

bool App::OnInit()
{
	myFrame* _myFrame = new myFrame("C++ GUI");
	_myFrame->Show();
	_myFrame->SetClientSize(1024, 576);
	return true;
}

wxIMPLEMENT_APP(App);