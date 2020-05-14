#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ OutputData
	/// </summary>
	public ref class OutputData : public System::Windows::Forms::Form
	{
	public:
		OutputData(void)
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
		~OutputData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обѕрограммеToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьс€¬√лавноећенюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйти»зѕрограммыToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вернутьс€¬√лавноећенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйти»зѕрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обѕрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(626, 28);
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
			this->вернутьс€¬√лавноећенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputData::вернутьс€¬√лавноећенюToolStripMenuItem_Click);
			// 
			// выйти»зѕрограммыToolStripMenuItem
			// 
			this->выйти»зѕрограммыToolStripMenuItem->Name = L"выйти»зѕрограммыToolStripMenuItem";
			this->выйти»зѕрограммыToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->выйти»зѕрограммыToolStripMenuItem->Text = L"¬ыйти из программы";
			this->выйти»зѕрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputData::выйти»зѕрограммыToolStripMenuItem_Click);
			// 
			// обѕрограммеToolStripMenuItem
			// 
			this->обѕрограммеToolStripMenuItem->Name = L"обѕрограммеToolStripMenuItem";
			this->обѕрограммеToolStripMenuItem->Size = System::Drawing::Size(127, 24);
			this->обѕрограммеToolStripMenuItem->Text = L"ќб программе";
			this->обѕрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputData::обѕрограммеToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(0, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(626, 162);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"—охранить данные в файл";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(325, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 30);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &OutputData::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->button1->Location = System::Drawing::Point(12, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"—охранить данные";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OutputData::button1_Click);
			// 
			// OutputData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 191);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(644, 238);
			this->MinimumSize = System::Drawing::Size(644, 238);
			this->Name = L"OutputData";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OutputData";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void вернутьс€¬√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void обѕрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
