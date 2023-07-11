#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ OutputData
	/// </summary>
	public ref class OutputData : public System::Windows::Forms::Form
	{
	public:
		OutputData(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~OutputData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèÈçÏğîãğàììûToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxSavePath;
	private: System::Windows::Forms::Button^ buttonSavePath;
	private: System::Windows::Forms::ToolStripMenuItem^ çàêğûòüToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxSavePath = (gcnew System::Windows::Forms::TextBox());
			this->buttonSavePath = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->çàêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âûõîäToolStripMenuItem,
					this->îáÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(625, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem,
					this->âûéòèÈçÏğîãğàììûToolStripMenuItem, this->çàêğûòüToolStripMenuItem
			});
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem
			// 
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Name = L"âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem";
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Text = L"Âåğíóòüñÿ â ãëàâíîå ìåíş";
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputData::âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem_Click);
			// 
			// âûéòèÈçÏğîãğàììûToolStripMenuItem
			// 
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Name = L"âûéòèÈçÏğîãğàììûToolStripMenuItem";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Text = L"Âûéòè èç ïğîãğàììû";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputData::âûéòèÈçÏğîãğàììûToolStripMenuItem_Click);
			// 
			// îáÏğîãğàììåToolStripMenuItem
			// 
			this->îáÏğîãğàììåToolStripMenuItem->Name = L"îáÏğîãğàììåToolStripMenuItem";
			this->îáÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(127, 24);
			this->îáÏğîãğàììåToolStripMenuItem->Text = L"Îá ïğîãğàììå";
			this->îáÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputData::îáÏğîãğàììåToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxSavePath);
			this->groupBox1->Controls->Add(this->buttonSavePath);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(0, 31);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(627, 162);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ñîõğàíèòü äàííûå â ôàéë";
			// 
			// textBoxSavePath
			// 
			this->textBoxSavePath->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSavePath->Location = System::Drawing::Point(325, 108);
			this->textBoxSavePath->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxSavePath->Name = L"textBoxSavePath";
			this->textBoxSavePath->Size = System::Drawing::Size(216, 30);
			this->textBoxSavePath->TabIndex = 6;
			this->textBoxSavePath->TextChanged += gcnew System::EventHandler(this, &OutputData::textBoxSavePath_TextChanged);
			// 
			// buttonSavePath
			// 
			this->buttonSavePath->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->buttonSavePath->Location = System::Drawing::Point(15, 96);
			this->buttonSavePath->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonSavePath->Name = L"buttonSavePath";
			this->buttonSavePath->Size = System::Drawing::Size(216, 55);
			this->buttonSavePath->TabIndex = 5;
			this->buttonSavePath->Text = L"Ñîõğàíèòü ïóòü";
			this->buttonSavePath->UseVisualStyleBackColor = true;
			this->buttonSavePath->Click += gcnew System::EventHandler(this, &OutputData::buttonSavePath_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(325, 34);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(216, 30);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &OutputData::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->button1->Location = System::Drawing::Point(15, 21);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 57);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ñîõğàíèòü äàííûå";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OutputData::button1_Click);
			// 
			// çàêğûòüToolStripMenuItem
			// 
			this->çàêğûòüToolStripMenuItem->Name = L"çàêğûòüToolStripMenuItem";
			this->çàêğûòüToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->çàêğûòüToolStripMenuItem->Text = L"Çàêğûòü";
			this->çàêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &OutputData::çàêğûòüToolStripMenuItem_Click);
			// 
			// OutputData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 190);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(643, 237);
			this->MinimumSize = System::Drawing::Size(643, 237);
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
	private: System::Void âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûéòèÈçÏğîãğàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îáÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSavePath_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxSavePath_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void çàêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
