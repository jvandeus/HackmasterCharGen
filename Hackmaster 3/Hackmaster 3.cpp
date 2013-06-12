// changed to multi-byte character set.
// moved headers to stdafx.h
// might need to try switching to subsytem of console instead of windows, not sure which is going to work.
// At the moment the database part is not working... so i commented that out...
// Hackmaster 3.cpp : main project file.

#include "stdafx.h"
#include "global.h"
#include "Welcome_Screen.h"
#include "StatRoller.h"
#include "Race_Selection.h"
#include "Output.h"

using namespace Hackmaster3;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	srand((unsigned)time(0));
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Welcome_Screen());
	Application::Run(gcnew StatRoller());
	Application::Run(gcnew Race_Selection());
	Application::Run(gcnew Output());
	//connectMySql();//connect to the database
	return 0;
}
