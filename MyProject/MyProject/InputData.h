#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ InputData
	/// </summary>
	public ref class InputData : public System::Windows::Forms::Form
	{
	public:
		InputData(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~InputData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьс€¬√лавноећенюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйти»зѕрограммыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обѕрограммеToolStripMenuItem;


	private: System::Windows::Forms::Button^ butonRead;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ buttonWritingData;


	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вернутьс€¬√лавноећенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйти»зѕрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обѕрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->butonRead = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->buttonWritingData = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выходToolStripMenuItem,
					this->обѕрограммеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(695, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вернутьс€¬√лавноећенюToolStripMenuItem,
					this->выйти»зѕрограммыToolStripMenuItem
			});
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"¬ыход";
			// 
			// вернутьс€¬√лавноећенюToolStripMenuItem
			// 
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Name = L"вернутьс€¬√лавноећенюToolStripMenuItem";
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Text = L"¬ернутьс€ в главное меню";
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputData::вернутьс€¬√лавноећенюToolStripMenuItem_Click);
			// 
			// выйти»зѕрограммыToolStripMenuItem
			// 
			this->выйти»зѕрограммыToolStripMenuItem->Name = L"выйти»зѕрограммыToolStripMenuItem";
			this->выйти»зѕрограммыToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->выйти»зѕрограммыToolStripMenuItem->Text = L"¬ыйти из программы";
			this->выйти»зѕрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputData::выйти»зѕрограммыToolStripMenuItem_Click);
			// 
			// обѕрограммеToolStripMenuItem
			// 
			this->обѕрограммеToolStripMenuItem->Name = L"обѕрограммеToolStripMenuItem";
			this->обѕрограммеToolStripMenuItem->Size = System::Drawing::Size(127, 24);
			this->обѕрограммеToolStripMenuItem->Text = L"ќб программе";
			this->обѕрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &InputData::обѕрограммеToolStripMenuItem_Click);
			// 
			// butonRead
			// 
			this->butonRead->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->butonRead->Location = System::Drawing::Point(24, 23);
			this->butonRead->Margin = System::Windows::Forms::Padding(4);
			this->butonRead->Name = L"butonRead";
			this->butonRead->Size = System::Drawing::Size(225, 58);
			this->butonRead->TabIndex = 2;
			this->butonRead->Text = L"—читать данные";
			this->butonRead->UseVisualStyleBackColor = true;
			this->butonRead->Click += gcnew System::EventHandler(this, &InputData::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 11));
			this->textBox1->Location = System::Drawing::Point(288, 40);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(284, 28);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &InputData::textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->butonRead);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(0, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(679, 110);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"„тение данных с файла";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &InputData::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonWritingData);
			this->groupBox2->Location = System::Drawing::Point(0, 150);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(695, 159);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"¬вод данных вручную";
			// 
			// buttonWritingData
			// 
			this->buttonWritingData->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->buttonWritingData->Location = System::Drawing::Point(24, 66);
			this->buttonWritingData->Margin = System::Windows::Forms::Padding(4);
			this->buttonWritingData->Name = L"buttonWritingData";
			this->buttonWritingData->Size = System::Drawing::Size(225, 58);
			this->buttonWritingData->TabIndex = 3;
			this->buttonWritingData->Text = L"¬вод вручную";
			this->buttonWritingData->UseVisualStyleBackColor = true;
			this->buttonWritingData->Click += gcnew System::EventHandler(this, &InputData::buttonWritingData_Click);
			// 
			// InputData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 319);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(713, 366);
			this->MinimumSize = System::Drawing::Size(713, 366);
			this->Name = L"InputData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"¬вод данных";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e);
private: System::Void вернутьс€¬√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void обѕрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonWritingDataOnYourOwn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonWritingData_Click(System::Object^ sender, System::EventArgs^ e);
};
}
