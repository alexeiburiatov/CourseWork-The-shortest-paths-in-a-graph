#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include"Graph.h"
#include"PathGraph.h"
#include <iostream>
#include<sstream>

using namespace System::Drawing;
Data_ procession;


System::Void MyProject::DataForm::сгенерироватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	procession.~Data_();
	dataGridView1->ReadOnly = false;

	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	procession.tops = Convert::ToInt32(num_of_tops->Value);
	procession.ribs = 0;


	dataGridView1->RowCount = procession.tops;
	dataGridView1->ColumnCount = procession.tops;
	procession.Set_Data_Array_By_Generating(procession.tops);
	
	
	Show();
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	return System::Void();
}

System::Void MyProject::DataForm::ввестиВручнуюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	procession.~Data_();
	dataGridView1->ReadOnly = false;

	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	procession.tops = Convert::ToInt32(num_of_tops->Value);
	procession.ribs = 0;

	
	dataGridView1->RowCount = procession.tops;
	dataGridView1->ColumnCount = procession.tops;
	procession.Create_Arrays();

	Head();

	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	return System::Void();

}

System::Void MyProject::DataForm::выводДанныхToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::сохранитьВПрограммуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	procession.ribs = 0;
	procession.tops = Convert::ToInt32(num_of_tops->Value);
	procession.~Data_();
	procession.Create_Arrays();
	string inf = "INF";
	double check;
	String^ inputed_INF = Convert_string_to_String(inf);
	string data;

	for (int i = 0; i < procession.tops; i++)
	{

		for (int j = 0; j < procession.tops; j++)
		{

			if (dataGridView1->Rows[i]->Cells[j]->Value->ToString() == inputed_INF)
			{
				procession.Adjacency_Array[i][j] = INF;
			}
			else
			{
				if (i != j)
				{
					check = Convert_String_to_num(dataGridView1->Rows[i]->Cells[j]->Value->ToString());
					if (check > 100)
					{
						MessageBox::Show("Слишком большой вес. Проверьте данные!", "Внимание!");
						return;
					}
					else if (check < -100)
					{
						MessageBox::Show("Слишком маленький вес. Проверьте данные!", "Внимание!");
						return;
					}
						
					procession.ribs++;
					data = "";
					Convert_String_to_string(dataGridView1->Rows[i]->Cells[j]->Value->ToString(), data);
					std::stringstream ss(data);
					ss >> procession.Adjacency_Array[i][j];
					ss.clear();
				}
				else
				{
					procession.Adjacency_Array[i][j]=0;
				}
			}

		}
	}
	procession.Set_Data_To_File("Important/reserved.txt");
	return System::Void();
}

System::Void MyProject::DataForm::сохранитьВФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	OutputData^ form = gcnew OutputData();
	form->Show();
	return System::Void();
}

System::Void MyProject::DataForm::удалитьДанныеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::вернутьсяВГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void MyProject::DataForm::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("Important/reserved.txt");
	remove("Important/picture.png");
	Application::Exit();
}

System::Void MyProject::DataForm::обПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Реализация алгоритмов Флойда-Уоршела и Данцига", "Поиск кратчайших путей");
}

System::Void MyProject::DataForm::DataForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::считатьСФайлаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputData^ form = gcnew InputData();
	this->Hide();
	form->Show();
	
}

System::Void MyProject::DataForm::DataForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	procession.Set_Data_Adjacency_Array_From_File("Important/reserved.txt");

	return System::Void();
}

void MyProject::DataForm::Show()
{

	
	string inf = "INF";
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i+1);
		dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
		{
			if (!procession.is_INF(i, j))

				dataGridView1->Rows[i]->Cells[j]->Value= procession.Adjacency_Array[i][j];
			else
				dataGridView1->Rows[i]->Cells[j]->Value = Convert_string_to_String(inf);
		}
	}
}

void MyProject::DataForm::Head()
{

	string inf = "INF";
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
		dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
		{
			if (i == j)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = 0;
			}
			else
			{
				dataGridView1->Rows[i]->Cells[j]->Value = Convert_string_to_String(inf);
			}
		}
	}

}

System::Void MyProject::DataForm::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::num_of_tops_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::pathFrom_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::pathTo_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::AlgorithmFloida_Click(System::Object^ sender, System::EventArgs^ e)
{
	FloidIter->Text = "";
	if (pathFrom->Text->ToString()==""|| pathTo->Text->ToString() == "")
	{
		MessageBox::Show("Вы не ввели данные", "Внимание!");
		return;
	}
	else
	{
		if (Convert::ToInt32(pathFrom->Text->ToString()) > procession.tops || Convert::ToInt32(pathFrom->Text->ToString()) <= 0 ||
			Convert::ToInt32(pathTo->Text->ToString()) > procession.tops || Convert::ToInt32(pathTo->Text->ToString()) <= 0)
		{
			MessageBox::Show("Проверьте корректность введенных данных", "Внимание!");
			return;
		}
		else
		{
			procession.Set_Top_From(Convert::ToInt32(pathFrom->Text->ToString()));
			procession.Set_Top_To(Convert::ToInt32(pathTo->Text->ToString()));
			procession.Get_The_Shortest_Path_Floida();
			if (procession.Get_Path_Counter() == 1)
			{
				MessageBox::Show("Путь не найден", "Внимание!");
				return;
			}
			else
			{
				FloidIter->Text = Convert_num_to_String(procession.Get_Iter_Floida());
				remove("Important/Path.png");
				procession.Show_Path();
				PathGraph^ form = gcnew PathGraph();
				form->Show();
			}
			
		}

	}



}

System::Void MyProject::DataForm::AlgorithmDantzig_Click(System::Object^ sender, System::EventArgs^ e)
{
	DantzigIter->Text = "";
	if (pathFrom->Text->ToString() == "" || pathTo->Text->ToString() == "")
	{
		MessageBox::Show("Вы не ввели данные", "Внимание!");
		return;
	}
	else
	{
		if (Convert::ToInt32(pathFrom->Text->ToString()) > procession.tops || Convert::ToInt32(pathFrom->Text->ToString()) <= 0 ||
			Convert::ToInt32(pathTo->Text->ToString()) > procession.tops || Convert::ToInt32(pathTo->Text->ToString()) <= 0)
		{
			MessageBox::Show("Проверьте корректность введенных данных", "Внимание!");
			return;
		}
		else
		{
			procession.Set_Top_From(Convert::ToInt32(pathFrom->Text->ToString()));
			procession.Set_Top_To(Convert::ToInt32(pathTo->Text->ToString()));
			procession.Get_The_Shortest_Path_Dantzig();
			if (procession.Get_Path_Counter() == 1)
			{
				MessageBox::Show("Путь не найден", "Внимание!");
				return;
			}
			else
			{
				DantzigIter->Text = Convert_num_to_String(procession.Get_Iter_Dantzig());
				remove("Important/Path.png");
				procession.Show_Path();
				PathGraph^ form = gcnew PathGraph();
				form->Show();
			}
		}
	}

}


System::Void MyProject::DataForm::визуализироватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (procession.tops>10)
	{
		MessageBox::Show("Вершин больше 10. Визуализировать невозможно", "Внимание!");
		return;
	}
	else
	{
		remove("Important/picture.png");
		procession.Show_Graph();
		Graph^ form = gcnew Graph();
		//this->Hide();
		form->Show();
		return System::Void();

	}

}

System::Void MyProject::DataForm::вывестиТаблицуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (procession.tops == 0)
	{
		MessageBox::Show("Данные отсутствуют!", "Внимание!");
		return;
	}

	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();


	dataGridView1->RowCount = procession.tops;
	dataGridView1->ColumnCount = procession.tops;


	Show();
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();
	dataGridView1->ReadOnly = true;


	return System::Void();
}

System::Void MyProject::DataForm::FloidIter_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
	return System::Void();
}

System::Void MyProject::DataForm::DantzigIter_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
