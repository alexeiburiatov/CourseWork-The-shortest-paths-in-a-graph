#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	MyProject::MyForm form;
	Application::Run(% form);
}

System::Void MyProject::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputData^ form = gcnew InputData();
	//this->Hide();
	form->Show();

}

System::Void MyProject::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("reserved.txt");
	Application::Exit();
}

System::Void MyProject::MyForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("reserved.txt");
	Application::Exit();
}

System::Void MyProject::MyForm::îáÏðîãðàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Ðåàëèçàöèÿ àëãîðèòìîâ Ôëîéäà-Óîðøåëà è Äàíöèãà", "Ïîèñê êðàò÷àéøèõ ïóòåé");
	
}

System::Void MyProject::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	//this->Hide();
	form->Show();
}

System::Void MyProject::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	OutputData^ form = gcnew OutputData();
	//this->Hide();
	form->Show();
}

System::Void MyProject::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	//this->Hide();
	form->Show();
}
