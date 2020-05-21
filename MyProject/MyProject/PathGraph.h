#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PathGraph
	/// </summary>
	public ref class PathGraph : public System::Windows::Forms::Form
	{
	public:
		PathGraph(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PathGraph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ ShowGraph;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьсяКПоискуToolStripMenuItem;
	private: System::Windows::Forms::Button^ SavePath;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ShowGraph = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вернутьсяКПоискуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SavePath = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(12, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(709, 365);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &PathGraph::pictureBox1_Click);
			// 
			// ShowGraph
			// 
			this->ShowGraph->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->ShowGraph->Location = System::Drawing::Point(144, 26);
			this->ShowGraph->Margin = System::Windows::Forms::Padding(2);
			this->ShowGraph->Name = L"ShowGraph";
			this->ShowGraph->Size = System::Drawing::Size(153, 33);
			this->ShowGraph->TabIndex = 12;
			this->ShowGraph->Text = L"Отобразить путь";
			this->ShowGraph->UseVisualStyleBackColor = true;
			this->ShowGraph->Click += gcnew System::EventHandler(this, &PathGraph::ShowGraph_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->вернутьсяКПоискуToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(733, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// вернутьсяКПоискуToolStripMenuItem
			// 
			this->вернутьсяКПоискуToolStripMenuItem->Name = L"вернутьсяКПоискуToolStripMenuItem";
			this->вернутьсяКПоискуToolStripMenuItem->Size = System::Drawing::Size(126, 20);
			this->вернутьсяКПоискуToolStripMenuItem->Text = L"Вернуться к поиску";
			this->вернутьсяКПоискуToolStripMenuItem->Click += gcnew System::EventHandler(this, &PathGraph::вернутьсяКПоискуToolStripMenuItem_Click);
			// 
			// SavePath
			// 
			this->SavePath->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->SavePath->Location = System::Drawing::Point(392, 26);
			this->SavePath->Margin = System::Windows::Forms::Padding(2);
			this->SavePath->Name = L"SavePath";
			this->SavePath->Size = System::Drawing::Size(153, 33);
			this->SavePath->TabIndex = 14;
			this->SavePath->Text = L"Сохранить путь";
			this->SavePath->UseVisualStyleBackColor = true;
			this->SavePath->Click += gcnew System::EventHandler(this, &PathGraph::SavePath_Click);
			// 
			// PathGraph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(733, 441);
			this->Controls->Add(this->SavePath);
			this->Controls->Add(this->ShowGraph);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(749, 480);
			this->MinimumSize = System::Drawing::Size(749, 480);
			this->Name = L"PathGraph";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PathGraph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void вернутьсяКПоискуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ShowGraph_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SavePath_Click(System::Object^ sender, System::EventArgs^ e);
};
}
