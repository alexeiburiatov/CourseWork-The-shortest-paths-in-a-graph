#include "PathGraph.h"
#include<string>
#include <iostream>
#include"OutputData.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;



System::Void MyProject::PathGraph::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::PathGraph::âåðíóòüñÿÊÏîèñêóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	delete pictureBox1->Image;
	remove("Important/Path.png");
	//this->Hide();
	return System::Void();

}

System::Void MyProject::PathGraph::ShowGraph_Click(System::Object^ sender, System::EventArgs^ e)
{
	string path = "Important/Path.png";
	pictureBox1->Image = Image::FromFile("Important/Path.png");
	//ShowGraph->Hide();
	return System::Void();
}

System::Void MyProject::PathGraph::SavePath_Click(System::Object^ sender, System::EventArgs^ e)
{
	OutputData^ form = gcnew OutputData();
	form->Show();
	return System::Void();
	return System::Void();
}
