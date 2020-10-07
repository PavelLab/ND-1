#pragma once
#include <math.h>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;



	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ T;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ θ;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ θ2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label5;













	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->T = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->θ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->θ2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(68, 37);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(689, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(844, 475);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->T, this->θ });
			this->dataGridView1->Location = System::Drawing::Point(844, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(177, 402);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// T
			// 
			this->T->HeaderText = L"T";
			this->T->MinimumWidth = 6;
			this->T->Name = L"T";
			this->T->ReadOnly = true;
			this->T->Width = 50;
			// 
			// θ
			// 
			this->θ->HeaderText = L"θ";
			this->θ->MinimumWidth = 6;
			this->θ->Name = L"θ";
			this->θ->ReadOnly = true;
			this->θ->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(100, 535);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"I(≠0)";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 532);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(317, 535);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(353, 532);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,001";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 485);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"θ\'=1-cosθ+(1+cosθ)I";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(561, 532);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 22);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"10";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(508, 535);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"T max";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->θ2
			});
			this->dataGridView2->Location = System::Drawing::Point(1059, 37);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(235, 402);
			this->dataGridView2->TabIndex = 14;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"I";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"θ1";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 50;
			// 
			// θ2
			// 
			this->θ2->HeaderText = L"θ2";
			this->θ2->MinimumWidth = 6;
			this->θ2->Name = L"θ2";
			this->θ2->Width = 50;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(320, 481);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(96, 21);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"bifurcation";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(511, 484);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"θ(0)=0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1325, 612);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x, double I){
			if (I > 0)
				return 2 * atan(sqrt(I) * tan(sqrt(I) * x));
			else return -2 * atan(sqrt(-I) * tanh(sqrt(-I) * x));
		}
		
		double f2(double x) {
			return acos((1 + x) / (1 - x));
		}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();


		double I = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);
		double h = Convert::ToDouble(textBox3->Text);


		if (checkBox1->Checked) {
			// Список точек
			int i = 0;
			dataGridView2->Rows->Clear();
			for (double x = -10; x <= 0; x += h)
			{
				//Добавление на график
				f1_list->Add(x, f2(x));
				f2_list->Add(x, -f2(x));
				//Печать в таблицу
				dataGridView2->Rows->Add();
				dataGridView2->Rows[i]->Cells[0]->Value = x;
				dataGridView2->Rows[i]->Cells[1]->Value = floor(f2(x) * 1000) / 1000;
				dataGridView2->Rows[i]->Cells[2]->Value = -floor(f2(x) * 1000) / 1000;
				i++;
			}
			LineItem Curve1 = panel->AddCurve("F1", f1_list, Color::Red, SymbolType::None);
			LineItem Curve2 = panel->AddCurve("F2", f2_list, Color::Blue, SymbolType::None);


			// Устанавливаем интересующий нас интервал по оси X
			panel->XAxis->Scale->Min = -10;
			panel->XAxis->Scale->Max = xmax;
		}
		else {
			// Список точек
			int i = 0;
			dataGridView1->Rows->Clear();
			for (double x = 0; x <= xmax; x += h)
			{
				//Добавление на график
				f1_list->Add(x, f1(x, I));
				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = x;
				dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x, I) * 1000) / 1000;
				i++;
			}
			LineItem Curve1 = panel->AddCurve("F(t)", f1_list, Color::Red, SymbolType::None);


			// Устанавливаем интересующий нас интервал по оси X
			panel->XAxis->Scale->Min = 0;
			panel->XAxis->Scale->Max = xmax; 
		}

		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}


};
}
