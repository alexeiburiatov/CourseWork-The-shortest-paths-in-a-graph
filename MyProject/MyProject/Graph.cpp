#include "Graph.h"
#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

System::Void MyProject::Graph::Graph_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::Graph::ShowGraph_Click(System::Object^ sender, System::EventArgs^ e)
{
	string path = "Important/picture.png";
	pictureBox1->Image = Image::FromFile("Important/picture.png");

	return System::Void();
}

System::Void MyProject::Graph::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::Graph::ВернутьсяКПоиску_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete pictureBox1->Image;
	remove("Important/picture.png");
	//this->Hide();
	return System::Void();
	
}
