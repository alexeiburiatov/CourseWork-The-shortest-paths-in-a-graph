#pragma once

namespace MyProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Graph
	/// </summary>
	public ref class Graph : public System::Windows::Forms::Form
	{
	public:
		Graph(void)
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
		~Graph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ShowGraph;
	protected:

	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ShowGraph = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ShowGraph
			// 
			this->ShowGraph->Font = (gcnew System::Drawing::Font(L"Courier New", 12));
			this->ShowGraph->Location = System::Drawing::Point(283, 11);
			this->ShowGraph->Margin = System::Windows::Forms::Padding(2);
			this->ShowGraph->Name = L"ShowGraph";
			this->ShowGraph->Size = System::Drawing::Size(153, 48);
			this->ShowGraph->TabIndex = 9;
			this->ShowGraph->Text = L"ќтобразить граф";
			this->ShowGraph->UseVisualStyleBackColor = true;
			this->ShowGraph->Click += gcnew System::EventHandler(this, &Graph::ShowGraph_Click);
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(733, 441);
			this->Controls->Add(this->ShowGraph);
			this->Name = L"Graph";
			this->Text = L"Graph";
			this->Load += gcnew System::EventHandler(this, &Graph::Graph_Load);
			this->ResumeLayout(false);

		}
		
#pragma endregion
	protected: virtual void OnPaint();
	private: System::Void Graph_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ShowGraph_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
