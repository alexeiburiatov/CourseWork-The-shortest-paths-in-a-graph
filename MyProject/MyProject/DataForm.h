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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::NumericUpDown^ num_of_tops;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ pathTo;

	private: System::Windows::Forms::TextBox^ pathFrom;
	private: System::Windows::Forms::Button^ AlgorithmFloida;
	private: System::Windows::Forms::Button^ AlgorithmDantzig;




	private: System::Windows::Forms::ToolStripMenuItem^ âèçóàëèçèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ToolStripMenuItem^ âûâåñòèÒàáëèöóToolStripMenuItem;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñãåíåğèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââåñòèÂğó÷íóşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûâîäÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèçóàëèçèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pathTo = (gcnew System::Windows::Forms::TextBox());
			this->pathFrom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->num_of_tops = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->AlgorithmFloida = (gcnew System::Windows::Forms::Button());
			this->AlgorithmDantzig = (gcnew System::Windows::Forms::Button());
			this->âûâåñòèÒàáëèöóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_of_tops))->BeginInit();
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
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			this->âûâîäÄàííûõToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âûâåñòèÒàáëèöóToolStripMenuItem,
					this->âèçóàëèçèğîâàòüToolStripMenuItem
			});
			this->âûâîäÄàííûõToolStripMenuItem->Name = L"âûâîäÄàííûõToolStripMenuItem";
			this->âûâîäÄàííûõToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûâîäÄàííûõToolStripMenuItem->Text = L"Âûâîä äàííûõ";
			this->âûâîäÄàííûõToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âûâîäÄàííûõToolStripMenuItem_Click);
			// 
			// âèçóàëèçèğîâàòüToolStripMenuItem
			// 
			this->âèçóàëèçèğîâàòüToolStripMenuItem->Name = L"âèçóàëèçèğîâàòüToolStripMenuItem";
			this->âèçóàëèçèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âèçóàëèçèğîâàòüToolStripMenuItem->Text = L"Âèçóàëèçèğîâàòü";
			this->âèçóàëèçèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âèçóàëèçèğîâàòüToolStripMenuItem_Click);
			// 
			// ñîõğàíåíèåÄàííûõToolStripMenuItem
			// 
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem,
					this->ñîõğàíèòüÂÔàéëToolStripMenuItem
			});
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Name = L"ñîõğàíåíèåÄàííûõToolStripMenuItem";
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			this->óäàëèòüÄàííûåToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Courier New", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(0, 137);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(760, 312);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DataForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(367, 55);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 36);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Äàííûå";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->pathTo);
			this->groupBox1->Controls->Add(this->pathFrom);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->num_of_tops);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 8));
			this->groupBox1->Location = System::Drawing::Point(3, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 105);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ïàğàìåòğû äëÿ ââîäà äàííûõ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label5->Location = System::Drawing::Point(197, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 21);
			this->label5->TabIndex = 7;
			this->label5->Text = L"âåğøèíå";
			// 
			// pathTo
			// 
			this->pathTo->Font = (gcnew System::Drawing::Font(L"Courier New", 8));
			this->pathTo->Location = System::Drawing::Point(164, 80);
			this->pathTo->Margin = System::Windows::Forms::Padding(2);
			this->pathTo->Name = L"pathTo";
			this->pathTo->Size = System::Drawing::Size(32, 20);
			this->pathTo->TabIndex = 6;
			this->pathTo->TextChanged += gcnew System::EventHandler(this, &DataForm::pathTo_TextChanged);
			// 
			// pathFrom
			// 
			this->pathFrom->Font = (gcnew System::Drawing::Font(L"Courier New", 8));
			this->pathFrom->Location = System::Drawing::Point(101, 81);
			this->pathFrom->Margin = System::Windows::Forms::Padding(2);
			this->pathFrom->Name = L"pathFrom";
			this->pathFrom->Size = System::Drawing::Size(32, 20);
			this->pathFrom->TabIndex = 5;
			this->pathFrom->TextChanged += gcnew System::EventHandler(this, &DataForm::pathFrom_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label4->Location = System::Drawing::Point(138, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ê";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label3->Location = System::Drawing::Point(9, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ïóòü îò";
			// 
			// num_of_tops
			// 
			this->num_of_tops->Font = (gcnew System::Drawing::Font(L"Courier New", 10));
			this->num_of_tops->Location = System::Drawing::Point(209, 28);
			this->num_of_tops->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->num_of_tops->Name = L"num_of_tops";
			this->num_of_tops->Size = System::Drawing::Size(75, 23);
			this->num_of_tops->TabIndex = 1;
			this->num_of_tops->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->num_of_tops->ValueChanged += gcnew System::EventHandler(this, &DataForm::num_of_tops_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label2->Location = System::Drawing::Point(6, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 21);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Êîëè÷åñòâî âåğøèí";
			// 
			// AlgorithmFloida
			// 
			this->AlgorithmFloida->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->AlgorithmFloida->Location = System::Drawing::Point(596, 31);
			this->AlgorithmFloida->Margin = System::Windows::Forms::Padding(2);
			this->AlgorithmFloida->Name = L"AlgorithmFloida";
			this->AlgorithmFloida->Size = System::Drawing::Size(153, 49);
			this->AlgorithmFloida->TabIndex = 6;
			this->AlgorithmFloida->Text = L"Ìåòîä Ôëîéäà";
			this->AlgorithmFloida->UseVisualStyleBackColor = true;
			this->AlgorithmFloida->Click += gcnew System::EventHandler(this, &DataForm::AlgorithmFloida_Click);
			// 
			// AlgorithmDantzig
			// 
			this->AlgorithmDantzig->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->AlgorithmDantzig->Location = System::Drawing::Point(596, 84);
			this->AlgorithmDantzig->Margin = System::Windows::Forms::Padding(2);
			this->AlgorithmDantzig->Name = L"AlgorithmDantzig";
			this->AlgorithmDantzig->Size = System::Drawing::Size(153, 49);
			this->AlgorithmDantzig->TabIndex = 7;
			this->AlgorithmDantzig->Text = L"Ìåòîä Äàíöèãà";
			this->AlgorithmDantzig->UseVisualStyleBackColor = true;
			this->AlgorithmDantzig->Click += gcnew System::EventHandler(this, &DataForm::AlgorithmDantzig_Click);
			// 
			// âûâåñòèÒàáëèöóToolStripMenuItem
			// 
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Name = L"âûâåñòèÒàáëèöóToolStripMenuItem";
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Text = L"Âûâåñòè òàáëèöó";
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âûâåñòèÒàáëèöóToolStripMenuItem_Click);
			// 
			// DataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 448);
			this->Controls->Add(this->AlgorithmDantzig);
			this->Controls->Add(this->AlgorithmFloida);
			this->Controls->Add(this->groupBox1);
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
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num_of_tops))->EndInit();
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
private: void Head();
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void num_of_tops_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void pathFrom_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void pathTo_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void AlgorithmFloida_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AlgorithmDantzig_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âèçóàëèçèğîâàòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûâåñòèÒàáëèöóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
