#pragma once
#include<iostream>
#include<ctime>
#include<vector>
#include<fstream>
#include<string>
#include"Functions.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;
#define INF 1e9

class Algorithm_Floida;
class Data_;
class Data_
{
public:

	//Data_();
	~Data_();
	void Create_Arrays();//виділення пам’яті для матриці суміжності
	//num- кількість вершин
	void Set_Data_Array_From_File(string File_Name);//зчитування з файлу користувача
	void Set_Data_Adjacency_Array_From_File(string File_Name);
	void Set_Data_Array_By_Generating(int num);//генерування даних
	void Set_Data_To_File(string File_Name);
	void Set_Path_To_File(string File_Name);
	void Show_Graph();
	void Show_Path();
	void Get_The_Shortest_Path_Floida();
	void Get_The_Shortest_Path_Dantzig();
	int Get_Path_Counter() { return this->path_counter; }
	double Get_Iter_Floida() { return this->iterFloida; }
	double Get_Iter_Dantzig() { return this->iterDantzig; }
	bool is_INF(int row, int column);
	void Set_Top_From(int from);
	void Set_Top_To(int to);
	double** Adjacency_Array;
	int tops = NULL;
	int ribs = NULL;


private:
	double iterFloida = 0;
	double iterDantzig = 0;
	int* path;
	int path_counter=0;
	
	int from = NULL;
	int to = NULL;
	void SetPathToFile(string File_Name);//reserved data
	class Algorithm_Floida
	{
	public:
		Algorithm_Floida(int tops, int ribs, double** Adjacency_Array, int from, int to, int* path);
		int tops=NULL;
		int ribs;

		int from=NULL;
		int to=NULL;
		int* path;
		int counter=0;
		double** Adjacency_Array;
		double** Array_Of_Distance;//для Флойда
		int** Array_Of_History;
		double iterFloida = 0;

		void Create_Arrays_of_Distance_History();
		void Processing();//алгоритм Флойда
		void Get_The_Shortest_Path();
		void Set_Result_to_File();
		~Algorithm_Floida();
	};
	class  Algorithm_Dantzig 
	{
	public:
		Algorithm_Dantzig(int tops, int ribs, double** Adjacency_Array, int from, int to, int* path);
		int tops=NULL;
		int ribs=NULL;

		int from = NULL;
		int to = NULL;
		int* path;
		int counter = 0;
		double iterDantzig = 0;
		double** Adjacency_Array;
		double*** Processing_Arrays;
		double** Array_of_History;
		
		double summing_Dm_m_j(double*** data, int i, int j, int m);
		double summing_Dm_i_m(double*** data, int i, int j, int m);

		void Create_Processing_History_Arrays();
		void Processing();
		void Get_The_Shortest_Path();
		void Set_Result_to_File();
		~Algorithm_Dantzig();
	};
	Algorithm_Floida* Floid = nullptr;
	Algorithm_Dantzig* Dantzig;
};