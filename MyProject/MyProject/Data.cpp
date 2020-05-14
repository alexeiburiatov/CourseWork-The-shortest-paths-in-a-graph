#include<iostream>
#include<ctime>
#include<vector>
#include<fstream>
#include<string>
#include<iomanip>
#include"Data.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
#define INF 1e9

class Algorithm_Floida;
class Data_;


void Data_::Create_Arrays()
{
	this->Adjacency_Array= new double*[this->tops];
	for (int i = 0; i < tops; i++)
	{
		this->Adjacency_Array[i] = new double[this->tops]{};
	}
	for (int i = 0; i < this->tops; i++)
	{
		for (int j = 0; j < this->tops; j++)
		{
			this->Adjacency_Array[i][j] = INF;
		}
	}
}

void Data_::Set_Data_Array_From_File(string File_Name)
{
	int x;
	int y;
	double weight;
	ifstream File(File_Name);
		File >> this->tops;
		File >> this->ribs;
		this->Adjacency_Array = new double* [this->tops];
		Create_Arrays();
		for (int i = 0; i < ribs; i++)
		{
			File >> x;
			File >> y;
			File >> weight;
			this->Adjacency_Array[x - 1][y - 1] = weight;
		}
	
	
}

void Data_::Set_Data_Adjacency_Array_From_File(string File_Name)
{
	ifstream File(File_Name);
	if (File.is_open())
	{
		File >> this->tops;
		double data;
		Create_Arrays();
		File >> this->ribs;

		for (int i = 0; i < this->tops; i++)
		{
			for (int j = 0; j < this->tops; j++)
			{
				File >> data;
				this->Adjacency_Array[i][j] = data;
			}
		}
	}
	else
	{
		MessageBox::Show("Данные не считаны. Проверьте корректность названия файла", "Внимание!");
		return;
	}
	

}

void Data_::Set_Data_Array_By_Generating(int num)
{
	this->tops = num;
	this->Adjacency_Array = new double* [tops];
	Create_Arrays();
	srand(time(NULL));
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			this->Adjacency_Array[i][j] = rand() % 100 - 50;
		}
	}
}

void Data_::Set_Data_To_File(string File_Name)
{
	ofstream File(File_Name);
	File << this->tops<<" ";
	File << this->ribs << endl;
	for (int i = 0; i < this->tops; i++)
	{
		for (int j = 0; j < this->tops; j++)
		{
			File<<setw(10)<<this->Adjacency_Array[i][j];
		
		}
		if(i!=this->tops-1)File << endl;
	}

	File.close();
	MessageBox::Show("Данные сохранены", "Внимание!");
}


void Data_::Set_Data_Array_By_Inputing(int num)
{
	this->tops = num;
	Create_Arrays();
	double temp;

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			//cin >> temp;
			this->Adjacency_Array[i][j] = temp;
		}
	}

}

void Data_::Get_The_Shortest_Path_Floida()
{
	this->Floid = new Algorithm_Floida(this->tops, this->ribs, this->Adjacency_Array);
	Floid->Create_Arrays_of_Distance_History();
	Floid->Processing();
	Floid->Get_Array_of_Distance();
	Floid->Get_The_Shortest_Path();
	Floid->Set_Result_to_File();
	delete Floid;
}

void Data_::Get_The_Shortest_Path_Dantzig()
{
	this->Dantzig = new Algorithm_Dantzig(this->tops, this->ribs, this->Adjacency_Array);
	Dantzig->Create_Processing_History_Arrays();
	Dantzig->Processing();
	Dantzig->Get_Array_of_Distance();
	Dantzig->Get_The_Shortest_Path();
	Dantzig->Set_Result_to_File();
	delete Dantzig;

}

bool Data_::is_INF(int row, int column)
{
	if (this->Adjacency_Array[row][column] == INF) return true;
	else return false;
}

Data_::~Data_()
{
	for (int i = 0; i < tops; i++)
	{
		delete this->Adjacency_Array[i];
	}
	//cout << "Data Destructor" << endl;
}




Data_::Algorithm_Floida::Algorithm_Floida( int tops, int ribs, double** Adjacency_Array)
{
	this->tops = tops;
	this->ribs = ribs;
	this->Adjacency_Array = Adjacency_Array;
}

void Data_::Algorithm_Floida::Create_Arrays_of_Distance_History()
{
	this->Array_Of_History = new int*[this->tops]{};
	this->Array_Of_Distance = new double*[this->tops]{};
	
	for (int i = 0; i < this->tops; i++)
	{
		this->Array_Of_History[i] = new int[this->tops] {};
		this->Array_Of_Distance[i] = new double[this->tops] {};
	}
	for (int i = 0; i < tops; i++)
	{
		for (int j = 0; j < tops; j++)
		{
			this->Array_Of_Distance[i][j] = this->Adjacency_Array[i][j];
			if (this->Array_Of_Distance[i][j] != INF) this->Array_Of_History[i][j] = j + 1;

		}
	}

}

void Data_::Algorithm_Floida::Processing()
{
	for (int i = 0; i < tops; i++)
	{
		for (int j = 0; j < tops; j++)
		{
			if (i == j)this->Array_Of_Distance[i][j] = 0;
		}
	}

	for (int i = 0; i < this->tops; i++)
	{
		for (int j = 0; j < this->tops; j++)
		{
			if (this->Array_Of_Distance[i][j] != INF)
			{
				for (int k = 0; k < this->tops; k++)
				{
					if (this->Array_Of_Distance[i][k] > this->Array_Of_Distance[i][j] + this->Array_Of_Distance[j][k])
					{
						this->Array_Of_Distance[i][k] = this->Array_Of_Distance[i][j] + this->Array_Of_Distance[j][k];
						this->Array_Of_History[i][k] = this->Array_Of_History[i][j];
					}
				}
			}

		}
	}



}

void Data_::Algorithm_Floida::Get_Array_of_Distance()
{
	for (int i = 0; i < this->tops; i++)
	{
		for (int j = 0; j < this->tops; j++)
		{
			//cout << this->Array_Of_Distance[i][j] << '\t';
		}
		//cout << endl;
	}
}

void Data_::Algorithm_Floida::Get_The_Shortest_Path()
{
//	cout << "Шлях з " << from << " до " << to << ":" << endl;
	//cout << from << '\t';
	int k = Array_Of_History[from - 1][to - 1];
	while (k != 0)
	{
		//cout << k << '\t';
		k = Array_Of_History[k - 1][to - 1];
	}
	//cout << endl;
}

void Data_::Algorithm_Floida::Set_Result_to_File()
{
	ofstream File("result.txt");
	File << "=====Матриця расстояний=====" << endl<<endl;
	for (int i = 0; i < tops; i++)
	{
		for (int j = 0; j < tops; j++)
		{
			File <<setw(5)<< Array_Of_Distance[i][j] << ends;
		}
		File << endl;
	}

	File.close();
}

Data_::Algorithm_Floida::~Algorithm_Floida()
{
	for (int i = 0; i < tops; i++)
	{
		delete[] Array_Of_Distance[i];
		delete[] Array_Of_History[i];
	}
	delete Array_Of_Distance;
	delete Array_Of_History;
	//cout << "Destructor" << endl;

}

Data_::Algorithm_Dantzig::Algorithm_Dantzig(int tops, int ribs, double** Adjacency_Array)
{
	this->tops = tops;
	this->ribs = ribs;
	this->Adjacency_Array = Adjacency_Array;
}

double Data_::Algorithm_Dantzig::summing_Dm_m_j(double*** data, int i, int j, int m)
{
	double sum = 0;
	sum = data[0][m - 1][i] + data[m - 1][i][j];
	return sum;
}

double Data_::Algorithm_Dantzig::summing_Dm_i_m(double*** data, int i, int j, int m)
{
	double sum = 0;
	sum = data[m - 1][i][j] + data[0][j][m - 1];
	return sum;
}

void Data_::Algorithm_Dantzig::Create_Processing_History_Arrays()
{
	this->Processing_Arrays= new double** [tops] {};
	Processing_Arrays[0] = new double* [tops] {};
	for (int i = 0; i < tops; i++)//D0
	{
		Processing_Arrays[0][i] = new double[tops] {};
	}

	for (int i = 0; i < tops; i++)
	{
		for (int j = 0; j < tops; j++)
		{
			if (i != j) Processing_Arrays[0][i][j] = INF;
		}
	}
	for (int i = 0; i < tops; i++)
	{
		for (size_t j = 0; j < tops; j++)
		{
			if (i!=j)Processing_Arrays[0][i][j] = Adjacency_Array[i][j];
		}

	}

	int layer = 1;
	for (int i = 1; i < tops + 1; i++)//D[1]-D[tops]
	{
		Processing_Arrays[i] = new double* [layer] {};
		for (int j = 0; j < layer; j++)
		{
			Processing_Arrays[i][j] = new double[layer] {};
		}
		layer++;
	}

	this->Array_of_History= new double* [tops] {};
	for (int i = 0; i < tops; i++)
	{
		Array_of_History[i] = new double[tops] {};
	}
	for (int i = 0; i < tops; i++) {
		for (int j = 0; j < tops; j++) {
			if (Processing_Arrays[0][i][j] != INF && Processing_Arrays[0][i][j] != 0)Array_of_History[i][j] = j + 1;
		}
	}

}

void Data_::Algorithm_Dantzig::Processing()
{
	//алгоритм
	int counter = 2;
	for (int m = 2; m <= tops; m++)//layer
	{
		for (int i = 0; i < counter; i++)//рядок
		{
			for (int j = 0; j < counter; j++)//стовбець
			{
				if (i == j)continue;//відстань до самої себе=0

				if (m - 1 == i)//за формулою, якщо степінь матриці дорівнює рядку
				{
					double min = INF * INF;
					int ptr;
					for (int i1 = 0; i1 < m - 1; i1++)
					{
						if (summing_Dm_m_j(Processing_Arrays, i1, j, m) < min)
						{
							ptr = i1;
							min = summing_Dm_m_j(Processing_Arrays, i1, j, m);
							Processing_Arrays[m][m - 1][j] = min;

						}
					}
					if (min < INF && i != ptr)Array_of_History[m - 1][j] = Array_of_History[m - 1][ptr];
				}
				else if (m - 1 == j)//за формулою, якщо степінь матриці дорівнює стовбцю
				{
					double min = INF * INF;
					int ptr;
					for (int j1 = 0; j1 < m - 1; j1++)
					{
						if (summing_Dm_i_m(Processing_Arrays, i, j1, m) < min)
						{
							ptr = j1;
							min = summing_Dm_i_m(Processing_Arrays, i, j1, m);
							Processing_Arrays[m][i][m - 1] = min;

						}
					}
					if (min < INF && i != ptr)Array_of_History[i][m - 1] = Array_of_History[i][ptr];

				}
			}
		}

		for (int i = 0; i < counter; i++)//для всіх інших вершин, які не задовольняють попередні умови
		{
			for (int j = 0; j < counter; j++)
			{
				if (i != j && m - 1 != j && m - 1 != i)
				{

					if (Processing_Arrays[m][i][m - 1] + Processing_Arrays[m][m - 1][j] < Processing_Arrays[m - 1][i][j])
					{
						Processing_Arrays[m][i][j] = Processing_Arrays[m][i][m - 1] + Processing_Arrays[m][m - 1][j];
						Array_of_History[i][j] = Array_of_History[i][m - 1];
					}
					else
					{
						Processing_Arrays[m][i][j] = Processing_Arrays[m - 1][i][j];
					}
				}
			}
		}
		counter++;
	}
}

void Data_::Algorithm_Dantzig::Get_The_Shortest_Path()
{
	//cout << "Шлях з " << from << " до " << to << ":" << endl;
	//cout << from << '\t';
	int k = Array_of_History[from - 1][to - 1];
	while (k != 0)
	{
		//cout << k << '\t';
		k = Array_of_History[k - 1][to - 1];
	}
	//cout << endl;
}

void Data_::Algorithm_Dantzig::Get_Array_of_Distance()
{
	for (int i = 0; i < this->tops; i++)
	{
		for (int j = 0; j < this->tops; j++)
		{
			//cout << this->Processing_Arrays[tops][i][j] << '\t';
		}
		//cout << endl;
	}
}

void Data_::Algorithm_Dantzig::Set_Result_to_File()
{
	ofstream File("result.txt");
	File << "=====Матриця відстаней=====" << endl << endl;
	for (int i = 0; i < tops; i++)
	{
		for (int j = 0; j < tops; j++)
		{
			File << setw(5) << this->Processing_Arrays[tops][i][j] << ends;
		}
		File << endl;
	}

	File.close();
}

Data_::Algorithm_Dantzig::~Algorithm_Dantzig()
{
	for (int i = 0; i < tops; i++)//D0
	{
		delete[] Processing_Arrays[0][i];
	}
	delete[] Processing_Arrays[0];

	int layer = 1;
	for (int i = 1; i < tops + 1; i++)//D[1]-D[tops]
	{
		
		for (int j = 0; j < layer; j++)
		{
			delete[] Processing_Arrays[i][j];
		}
		delete[] Processing_Arrays[i];
		layer++;
	}

	for (int i = 0; i < tops; i++)
	{
		delete[] Array_of_History[i];
	}
	delete[] Array_of_History;


	//cout << "Destructor" << endl;
}

