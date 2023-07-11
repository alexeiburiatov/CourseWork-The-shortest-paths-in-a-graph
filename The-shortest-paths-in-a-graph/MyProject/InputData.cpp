#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include"Functions.h"
#include <iostream>

using namespace std;
System::Void MyProject::InputData::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text == "")
	{
		MessageBox::Show("������� �������� �����!", "��������!");
		return;
	}
	string filename;
	Convert_String_to_string(textBox1->Text->ToString(), filename);

	ifstream File(filename);
	if (File.is_open()) {
		File.close();
		Data_ temp;
		temp.Set_Data_Array_From_File(filename);
		MessageBox::Show("������ �������", "��������!");
		temp.Set_Data_To_File("Important/reserved.txt");
		if (MessageBox::Show("������� � ����� ��� ������ � �������?", "��������!", MessageBoxButtons::YesNo) != System::Windows::Forms::DialogResult::No)
		{
			DataForm^ form = gcnew DataForm();
			this->Hide();
			form->Show();
		}
		//return;
	}
	else
	{
		MessageBox::Show("������ �� �������. ��������� ������������ �������� �����", "��������!");
		return;
	}
}
System::Void MyProject::InputData::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::InputData::groupBox1_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::InputData::���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void MyProject::InputData::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Important/reserved.txt");
	remove("Important/picture.png");
	Application::Exit();
}

System::Void MyProject::InputData::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("���������� ���������� ������-������� � �������", "����� ���������� �����");
}


System::Void MyProject::InputData::buttonWritingDataOnYourOwn_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::InputData::buttonWritingData_Click(System::Object^ sender, System::EventArgs^ e)
{
	DataForm^ form = gcnew DataForm();
	this->Hide();
	form->Show();
}

