#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>


System::Void MyProject::OutputData::���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void MyProject::OutputData::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Important/reserved.txt");
	remove("Important/picture.png");
	Application::Exit();
}

System::Void MyProject::OutputData::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("���������� ���������� ������-������� � �������", "����� ���������� �����");
}

System::Void MyProject::OutputData::button1_Click(System::Object^ sender, System::EventArgs^ e)//��������� � ����
{
	if (textBox1->Text == "")
	{
		MessageBox::Show("������� �������� �����!", "��������!");
		return;
	}
	string filename;
	Convert_String_to_string(textBox1->Text->ToString(), filename);
	ofstream File(filename);
	if (File.is_open()) {
		File.close();
		Data_ temp;
		temp.Set_Data_Adjacency_Array_From_File("Important/reserved.txt");
		temp.Set_Data_To_File(filename);
		//return;
	}
	else
	{
		MessageBox::Show("������ �� �������. ��������� �����", "��������!");
		return;
	}

}

System::Void MyProject::OutputData::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)//���� ��� ����������
{
	
}

System::Void MyProject::OutputData::buttonSavePath_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBoxSavePath->Text == "")
	{
		MessageBox::Show("������� �������� �����!", "��������!");
		return;
	}

	ifstream File("Important/reserved_for_path.txt");
	if (!File.is_open())
	{
		MessageBox::Show("���� �� ������!", "��������!");
		return;
	}
	else
	{
		string filename;
		Convert_String_to_string(textBoxSavePath->Text->ToString(), filename);
		ofstream File(filename);
		if (File.is_open()) {
			File.close();
			Data_ temp;
			temp.Set_Path_To_File(filename);
			MessageBox::Show("������ ���������!", "��������!");
			return;
		}
		else
		{
			MessageBox::Show("������ �� �������. ��������� ������������ �������� �����", "��������!");
			return;
		}

	}




	return System::Void();
}

System::Void MyProject::OutputData::textBoxSavePath_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::OutputData::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Hide();
	return System::Void();
}
