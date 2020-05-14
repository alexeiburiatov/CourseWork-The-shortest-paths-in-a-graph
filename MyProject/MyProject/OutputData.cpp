#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>


System::Void MyProject::OutputData::вернутьсяВГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	//this->Hide();
	form->Show();
}

System::Void MyProject::OutputData::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("reserved.txt");
	Application::Exit();
}

System::Void MyProject::OutputData::обПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Реализация алгоритмов Флойда-Уоршела и Данцига", "Поиск кратчайших путей");
}

System::Void MyProject::OutputData::button1_Click(System::Object^ sender, System::EventArgs^ e)//сохранить в файл
{
	if (textBox1->Text == "")
	{
		MessageBox::Show("Введите название файла!", "Внимание!");
		return;
	}
	string filename;
	Convert_String_to_string(textBox1->Text->ToString(), filename);
	ofstream File(filename);
	if (File.is_open()) {
		File.close();
		Data_ temp;
		temp.Set_Data_Adjacency_Array_From_File("reserved.txt");
		temp.Set_Data_To_File(filename);
		//return;
	}
	else
	{
		MessageBox::Show("Данные не считаны. Проверьте корректность названия файла", "Внимание!");
		return;
	}

}

System::Void MyProject::OutputData::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)//поле для сохранения
{
	
}
