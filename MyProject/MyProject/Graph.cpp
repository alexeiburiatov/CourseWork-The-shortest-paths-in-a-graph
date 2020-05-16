#include "Graph.h"
#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


void MyProject::Graph::OnPaint()
{
	
	throw gcnew System::NotImplementedException();
}

System::Void MyProject::Graph::Graph_Load(System::Object^ sender, System::EventArgs^ e)
{
	//this->OnPaint();
	//Font = gcnew System::Drawing::Font("Times New Roman", (float)7 );

	//return System::Void();
}

System::Void MyProject::Graph::ShowGraph_Click(System::Object^ sender, System::EventArgs^ e)
{
	Graphics^ Графика = this->CreateGraphics();
	Pen^ Перо = gcnew Pen(Color::Red);
	Перо->Width = 1;
	Brush^ Кисть = gcnew SolidBrush(Color::Red);
	Графика->Clear(SystemColors::Control);
	//Графика->DrawEllipse(Перо, 50, 50, 50, 50);
	Графика->DrawString("Каждый во что-то верит, но\n" + "жизнь преподносит сюрпризы.", Font, Кисть, 10, 100);
	Графика->RotateTransform(90);
	Графика->DrawString("Каждый во что-то верит, но\n" + "жизнь преподносит сюрпризы.", Font, Кисть, 10, 100);
	return System::Void();
}
