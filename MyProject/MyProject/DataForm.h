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
	private: System::Windows::Forms::TextBox^ FloidIter;
	private: System::Windows::Forms::TextBox^ DantzigIter;
	private: System::Windows::Forms::Label^ label6;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DataForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñãåíåğèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ââåñòèÂğó÷íóşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûâîäÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûâåñòèÒàáëèöóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèçóàëèçèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->FloidIter = (gcnew System::Windows::Forms::TextBox());
			this->DantzigIter = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1013, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äåéñòâèåToolStripMenuItem
			// 
			this->äåéñòâèåToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem,
					this->âûâîäÄàííûõToolStripMenuItem, this->ñîõğàíåíèåÄàííûõToolStripMenuItem
			});
			this->äåéñòâèåToolStripMenuItem->Name = L"äåéñòâèåToolStripMenuItem";
			this->äåéñòâèåToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->äåéñòâèåToolStripMenuItem->Text = L"Äåéñòâèå";
			// 
			// ââîäÄàííûõÂğó÷íóşToolStripMenuItem
			// 
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñãåíåğèğîâàòüToolStripMenuItem,
					this->ââåñòèÂğó÷íóşToolStripMenuItem, this->ñ÷èòàòüÑÔàéëàToolStripMenuItem
			});
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->Name = L"ââîäÄàííûõÂğó÷íóşToolStripMenuItem";
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ââîäÄàííûõÂğó÷íóşToolStripMenuItem->Text = L"Ââîä äàííûõ";
			// 
			// ñãåíåğèğîâàòüToolStripMenuItem
			// 
			this->ñãåíåğèğîâàòüToolStripMenuItem->Name = L"ñãåíåğèğîâàòüToolStripMenuItem";
			this->ñãåíåğèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->ñãåíåğèğîâàòüToolStripMenuItem->Text = L"Ñãåíåğèğîâàòü";
			this->ñãåíåğèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñãåíåğèğîâàòüToolStripMenuItem_Click);
			// 
			// ââåñòèÂğó÷íóşToolStripMenuItem
			// 
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Name = L"ââåñòèÂğó÷íóşToolStripMenuItem";
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Size = System::Drawing::Size(204, 26);
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Text = L"Ââåñòè âğó÷íóş";
			this->ââåñòèÂğó÷íóşToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ââåñòèÂğó÷íóşToolStripMenuItem_Click);
			// 
			// ñ÷èòàòüÑÔàéëàToolStripMenuItem
			// 
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem->Name = L"ñ÷èòàòüÑÔàéëàToolStripMenuItem";
			this->ñ÷èòàòüÑÔàéëàToolStripMenuItem->Size = System::Drawing::Size(204, 26);
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
			this->âûâîäÄàííûõToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âûâîäÄàííûõToolStripMenuItem->Text = L"Âûâîä äàííûõ";
			this->âûâîäÄàííûõToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âûâîäÄàííûõToolStripMenuItem_Click);
			// 
			// âûâåñòèÒàáëèöóToolStripMenuItem
			// 
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Name = L"âûâåñòèÒàáëèöóToolStripMenuItem";
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Text = L"Âûâåñòè òàáëèöó";
			this->âûâåñòèÒàáëèöóToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âûâåñòèÒàáëèöóToolStripMenuItem_Click);
			// 
			// âèçóàëèçèğîâàòüToolStripMenuItem
			// 
			this->âèçóàëèçèğîâàòüToolStripMenuItem->Name = L"âèçóàëèçèğîâàòüToolStripMenuItem";
			this->âèçóàëèçèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(224, 26);
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
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Text = L"Ñîõğàíèòü äàííûå";
			this->ñîõğàíåíèåÄàííûõToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñîõğàíåíèåÄàííûõToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem
			// 
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Name = L"ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem";
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Text = L"Ñîõğàíèòü â ïğîãğàììó";
			this->ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñîõğàíèòüÂÏğîãğàììóToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÂÔàéëToolStripMenuItem
			// 
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Name = L"ñîõğàíèòüÂÔàéëToolStripMenuItem";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(261, 26);
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Text = L"Ñîõğàíèòü â ôàéë";
			this->ñîõğàíèòüÂÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::ñîõğàíèòüÂÔàéëToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem,
					this->âûéòèÈçÏğîãğàììûToolStripMenuItem
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
			this->âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âåğíóòüñÿÂÃëàâíîåÌåíşToolStripMenuItem_Click);
			// 
			// âûéòèÈçÏğîãğàììûToolStripMenuItem
			// 
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Name = L"âûéòèÈçÏğîãğàììûToolStripMenuItem";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Size = System::Drawing::Size(279, 26);
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Text = L"Âûéòè èç ïğîãğàììû";
			this->âûéòèÈçÏğîãğàììûToolStripMenuItem->Click += gcnew System::EventHandler(this, &DataForm::âûéòèÈçÏğîãğàììûToolStripMenuItem_Click);
			// 
			// îáÏğîãğàììåToolStripMenuItem
			// 
			this->îáÏğîãğàììåToolStripMenuItem->Name = L"îáÏğîãğàììåToolStripMenuItem";
			this->îáÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(127, 24);
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
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
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
			this->dataGridView1->Location = System::Drawing::Point(0, 169);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->dataGridView1->RowHeadersWidth = 40;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1013, 384);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DataForm::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(429, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 46);
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
			this->groupBox1->Location = System::Drawing::Point(4, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(387, 129);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ïàğàìåòğû äëÿ ââîäà äàííûõ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label5->Location = System::Drawing::Point(263, 98);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(110, 27);
			this->label5->TabIndex = 7;
			this->label5->Text = L"âåğøèíå";
			// 
			// pathTo
			// 
			this->pathTo->Font = (gcnew System::Drawing::Font(L"Courier New", 8));
			this->pathTo->Location = System::Drawing::Point(219, 98);
			this->pathTo->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pathTo->Name = L"pathTo";
			this->pathTo->Size = System::Drawing::Size(41, 23);
			this->pathTo->TabIndex = 6;
			this->pathTo->TextChanged += gcnew System::EventHandler(this, &DataForm::pathTo_TextChanged);
			// 
			// pathFrom
			// 
			this->pathFrom->Font = (gcnew System::Drawing::Font(L"Courier New", 8));
			this->pathFrom->Location = System::Drawing::Point(135, 100);
			this->pathFrom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pathFrom->Name = L"pathFrom";
			this->pathFrom->Size = System::Drawing::Size(41, 23);
			this->pathFrom->TabIndex = 5;
			this->pathFrom->TextChanged += gcnew System::EventHandler(this, &DataForm::pathFrom_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label4->Location = System::Drawing::Point(184, 100);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ê";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label3->Location = System::Drawing::Point(12, 98);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ïóòü îò";
			// 
			// num_of_tops
			// 
			this->num_of_tops->Font = (gcnew System::Drawing::Font(L"Courier New", 10));
			this->num_of_tops->Location = System::Drawing::Point(279, 34);
			this->num_of_tops->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->num_of_tops->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->num_of_tops->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->num_of_tops->Name = L"num_of_tops";
			this->num_of_tops->Size = System::Drawing::Size(100, 26);
			this->num_of_tops->TabIndex = 1;
			this->num_of_tops->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->num_of_tops->ValueChanged += gcnew System::EventHandler(this, &DataForm::num_of_tops_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label2->Location = System::Drawing::Point(8, 34);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(250, 27);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Êîëè÷åñòâî âåğøèí";
			// 
			// AlgorithmFloida
			// 
			this->AlgorithmFloida->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->AlgorithmFloida->Location = System::Drawing::Point(829, 48);
			this->AlgorithmFloida->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AlgorithmFloida->Name = L"AlgorithmFloida";
			this->AlgorithmFloida->Size = System::Drawing::Size(176, 57);
			this->AlgorithmFloida->TabIndex = 6;
			this->AlgorithmFloida->Text = L"Ìåòîä Ôëîéäà";
			this->AlgorithmFloida->UseVisualStyleBackColor = true;
			this->AlgorithmFloida->Click += gcnew System::EventHandler(this, &DataForm::AlgorithmFloida_Click);
			// 
			// AlgorithmDantzig
			// 
			this->AlgorithmDantzig->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->AlgorithmDantzig->Location = System::Drawing::Point(829, 108);
			this->AlgorithmDantzig->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AlgorithmDantzig->Name = L"AlgorithmDantzig";
			this->AlgorithmDantzig->Size = System::Drawing::Size(176, 58);
			this->AlgorithmDantzig->TabIndex = 7;
			this->AlgorithmDantzig->Text = L"Ìåòîä Äàíöèãà";
			this->AlgorithmDantzig->UseVisualStyleBackColor = true;
			this->AlgorithmDantzig->Click += gcnew System::EventHandler(this, &DataForm::AlgorithmDantzig_Click);
			// 
			// FloidIter
			// 
			this->FloidIter->BackColor = System::Drawing::Color::White;
			this->FloidIter->Cursor = System::Windows::Forms::Cursors::Default;
			this->FloidIter->Enabled = false;
			this->FloidIter->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->FloidIter->ForeColor = System::Drawing::SystemColors::WindowText;
			this->FloidIter->Location = System::Drawing::Point(623, 73);
			this->FloidIter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FloidIter->Name = L"FloidIter";
			this->FloidIter->Size = System::Drawing::Size(200, 30);
			this->FloidIter->TabIndex = 8;
			this->FloidIter->TextChanged += gcnew System::EventHandler(this, &DataForm::FloidIter_TextChanged);
			// 
			// DantzigIter
			// 
			this->DantzigIter->BackColor = System::Drawing::Color::White;
			this->DantzigIter->Cursor = System::Windows::Forms::Cursors::Default;
			this->DantzigIter->Enabled = false;
			this->DantzigIter->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->DantzigIter->ForeColor = System::Drawing::SystemColors::WindowText;
			this->DantzigIter->Location = System::Drawing::Point(623, 134);
			this->DantzigIter->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DantzigIter->Name = L"DantzigIter";
			this->DantzigIter->Size = System::Drawing::Size(200, 30);
			this->DantzigIter->TabIndex = 9;
			this->DantzigIter->TextChanged += gcnew System::EventHandler(this, &DataForm::DantzigIter_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Courier New", 14));
			this->label6->Location = System::Drawing::Point(620, 33);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(194, 27);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Ê-âî îïåğàöèé";
			// 
			// DataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 551);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->DantzigIter);
			this->Controls->Add(this->FloidIter);
			this->Controls->Add(this->AlgorithmDantzig);
			this->Controls->Add(this->AlgorithmFloida);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
private: System::Void FloidIter_TextChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void DantzigIter_TextChanged(System::Object^ sender, System::EventArgs^ e);
};
}
