#include "MyForm.h"
#include"Patient_Donor_Database.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	PatientDonor p;
	p.loadp();
	p.loadd();
	p.setcities();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(%form);
	
}