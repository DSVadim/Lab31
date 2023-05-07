#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab31::MyForm MyForm; //назва створеного проекту
	Application::Run(% MyForm); //запуск форми
}
