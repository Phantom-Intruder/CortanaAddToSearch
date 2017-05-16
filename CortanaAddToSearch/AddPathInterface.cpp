#include "AddPathInterface.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CortanaAddToSearch::AddPathInterface form;
	Application::Run(%form);
}
