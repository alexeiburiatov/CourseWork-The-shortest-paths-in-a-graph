#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>
#include<direct.h>

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
	int result;
	result = mkdir("Important");
	return System::Void();
}

System::Void MyProject::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputData^ form = gcnew InputData();
	this->Hide();
	form->Show();

}

System::Void MyProject::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Important/reserved.txt");
	remove("Important/picture.png");
	Application::Exit();
}

System::Void MyProject::MyForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Important/reserved.txt");
	remove("Important/picture.png");
	Application::Exit();

}

System::Void MyProject::MyForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("���������� ���������� ������-������� � �������", "����� ���������� �����");

}

System::Void MyProject::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

System::Void MyProject::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	OutputData^ form = gcnew OutputData();
	this->Hide();
	form->Show();
}

System::Void MyProject::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}
