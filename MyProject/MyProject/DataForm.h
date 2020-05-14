#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ DataForm
	/// </summary>
	public ref class DataForm : public System::Windows::Forms::Form
	{
	public:
		DataForm(void)
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
		~DataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûâîäÄàííûõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíåíèåÄàííûõToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüÄàííûåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ââîäÄàííûõÂğó÷íóşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñãåíåğèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ââåñòèÂğó÷íóşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÂÔàéëToolStripMenuItem;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^ âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûéòèÈçÏğîãğàììûToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñ÷èòàòüÑÔàéëàToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñãåíåğèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââåñòèÂğó÷íóşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûâîäÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüÄàííûåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äåéñòâèåToolStripMenuItem,
					this->âûõîäToolStripMenuItem, this->îáÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(760, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äåéñòâèåToolStripMenuItem
			// 
			this->äåéñòâèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem,
					this->âûâîäÄàííûõToolStripMenuItem, this->ñîõğàíåíèåÄàííûõToolStripMenuItem, this->óäàëèòüÄàííûåToolStripMenuItem
			});
			this->äåéñòâèåToolStripMenuItem->Name = L"äåéñòâèåToolStripMenuItem";
			this->äåéñòâèåToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->äåéñòâèåToolStripMenuItem->Text = L"Äåéñòâèå";
			// 
			// ââîäÄàííûõÂğó÷íóşToolStripMenuItem
			// 
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñãåíåğèğîâàòüToolStripMenuItem,
					this->ââåñòèÂğó÷íóşToolStripMenuItem, this->ñ÷èòàòüÑÔàéëàToolStripMenuItem
			});
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->Name = L"ââîäÄàííûõÂğó÷íóşToolStripMenuItem";
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->Text = L"Ââîä äàííûõ";
			// 
			// ñãåíåğèğîâàòüToolStripMenuItem
			// 
			this->ñãåíåğèğîâàòüToolStripMenuItem->Name = L"ñãåíåğèğîâàòüToolStripMenuItem";
			this->ñãåíåğèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->ñãåíåğèğîâàòüToolStripMenuItem->Text = L"Ñãåíåğèğîâàòü";
			this->ñãåíåğèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñãåíåğèğîâàòüToolStripMenuItem_Click);
			// 
			// ââåñòèÂğó÷íóşToolStripMenuItem
			// 
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Name = L"ââåñòèÂğó÷íóşToolStripMenuItem";
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Text = L"Ââåñòè âğó÷íóş";
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ââåñòèÂğó÷íóşToolStripMenuItem_Click);
			// 
			// ñ÷èòàòüÑÔàéëàToolStripMenuItem
			// 
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem->Name = L"ñ÷èòàòüÑÔàéëàToolStripMenuItem";
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem->Text = L"Ñ÷èòàòü ñ ôàéëà";
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñ÷èòàòüÑÔàéëàToolStripMenuItem_Click);
			// 
			// âûâîäÄàííûõToolStripMenuItem
			// 
			this->âûâîäÄàííûõToolStripMenuItem->Name = L"âûâîäÄàííûõToolStripMenuItem";
			this->âûâîäÄàííûõToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->âûâîäÄàííûõToolStripMenuItem->Text = L"Âûâîä äàííûõ";
			this->âûâîäÄàííûõToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âûâîäÄàííûõToolStripMenuItem_Click);
			// 
			// ñîõğàíåíèåÄàííûõToolStripMenuItem
			// 
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem,
					this->ñîõğàíèòüÂÔàéëToolStripMenuItem
			});
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Name = L"ñîõğàíåíèåÄàííûõToolStripMenuItem";
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Text = L"Ñîõğàíèòü äàííûå";
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñîõğàíåíèåÄàííûõToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem
			// 
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Name = L"ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem";
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Text = L"Ñîõğàíèòü â ïğîãğàììó";
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÂÔàéëToolStripMenuItem
			// 
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Name = L"ñîõğàíèòüÂÔàéëToolStripMenuItem";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(208, 22);
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Text = L"Ñîõğàíèòü â ôàéë";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñîõğàíèòüÂÔàéëToolStripMenuItem_Click);
			// 
			// óäàëèòüÄàííûåToolStripMenuItem
			// 
			this->óäàëèòüÄàííûåToolStripMenuItem->Name = L"óäàëèòüÄàííûåToolStripMenuItem";
			this->óäàëèòüÄàííûåToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->óäàëèòüÄàííûåToolStripMenuItem->Text = L"Óäàëèòü äàííûå";
			this->óäàëèòüÄàííûåToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::óäàëèòüÄàííûåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem,
					this->âûéòèÈçÏğîãğàììûToolStripMenuItem
			});
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem
			// 
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Name = L"âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem";
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Text = L"Âåğíóòüñÿ â ãëàâíîå ìåíş";
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem_Click);
			// 
			// âûéòèÈçÏğîãğàììûToolStripMenuItem
			// 
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Name = L"âûéòèÈçÏğîãğàììûToolStripMenuItem";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Size = System::Drawing::Size(221, 22);
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Text = L"Âûéòè èç ïğîãğàììû";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âûéòèÈçÏğîãğàììûToolStripMenuItem_Click);
			// 
			// îáÏğîãğàììåToolStripMenuItem
			// 
			this->îáÏğîãğàììåToolStripMenuItem->Name = L"îáÏğîãğàììåToolStripMenuItem";
			this->îáÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->îáÏğîãğàììåToolStripMenuItem->Text = L"Îá ïğîãğàììå";
			this->îáÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::îáÏğîãğàììåToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(0, 77);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(760, 372);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DataForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(274, 23);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Äàííûå";
			// 
			// DataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 448);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"DataForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DataForm";
			this->Load += gcnew System::EventHandler(this, &DataForm::DataForm_Load);
			this->Shown += gcnew System::EventHandler(this, &DataForm::DataForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ñîõğàíåíèåÄàííûõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ñãåíåğèğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ââåñòèÂğó÷íóşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûâîäÄàííûõToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñîõğàíèòüÂÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void óäàëèòüÄàííûåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûéòèÈçÏğîãğàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îáÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DataForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void ñ÷èòàòüÑÔàéëàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void DataForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: void Show();
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}
