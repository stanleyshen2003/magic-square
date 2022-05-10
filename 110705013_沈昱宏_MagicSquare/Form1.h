#pragma once
#define SIZE 37
#define SWAP(x,y,t) (t=x,x=y,y=t)

int square[SIZE][SIZE];
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->checkBox2);
			this->splitContainer1->Panel1->Controls->Add(this->checkBox1);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(819, 397);
			this->splitContainer1->SplitterDistance = 105;
			this->splitContainer1->SplitterWidth = 3;
			this->splitContainer1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 75);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 28);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 9.5F));
			this->label2->Location = System::Drawing::Point(10, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"n需為奇數或4的倍數，且3<=n<=37";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(156, 80);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(155, 19);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Show incorrect square";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(234, 4);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(91, 19);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Self Check";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton7);
			this->groupBox2->Controls->Add(this->radioButton8);
			this->groupBox2->Location = System::Drawing::Point(575, 10);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(228, 77);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"moving direction";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Checked = true;
			this->radioButton5->Location = System::Drawing::Point(7, 25);
			this->radioButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(70, 19);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"left-top";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(115, 23);
			this->radioButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(78, 19);
			this->radioButton6->TabIndex = 6;
			this->radioButton6->Text = L"right-top";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 49);
			this->radioButton7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(92, 19);
			this->radioButton7->TabIndex = 3;
			this->radioButton7->Text = L"left-bottom";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->Visible = false;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(115, 49);
			this->radioButton8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(100, 19);
			this->radioButton8->TabIndex = 5;
			this->radioButton8->Text = L"right-bottom";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Location = System::Drawing::Point(337, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(228, 77);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"position of 1";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(14, 32);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(47, 19);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Text = L"left";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(155, 32);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(55, 19);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->Text = L"right";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(84, 22);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(46, 19);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"top";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(78, 49);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(68, 19);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->Text = L"bottom";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(39, 5);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"n=";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(124, 4);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Magic Square";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(819, 289);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(811, 260);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"listbox";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(3, 2);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(805, 256);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(811, 259);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"richtextbox";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(3, 2);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(805, 255);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Size = System::Drawing::Size(811, 259);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"dataGridView";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 2);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 31;
			this->dataGridView1->Size = System::Drawing::Size(805, 255);
			this->dataGridView1->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 397);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Magic Square";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int position_of_i() {
			if (radioButton1->Checked)
				return 1;
			else if (radioButton2->Checked)
				return 2;
			else if (radioButton3->Checked)
				return 3;
			else if (radioButton4->Checked)
				return 4;
		}
		int direction() {
			if (radioButton5->Checked)
				return 1;
			else if (radioButton6->Checked)
				return 2;
			else if (radioButton7->Checked)
				return 3;
			else if (radioButton8->Checked)
				return 4;
		}
		void MagicSquare(int n) {
			int i, j, k, l, data;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					square[i][j] = 0;
			}
			switch (position_of_i()) {
			case 1:
				i = 0;
				j = (n - 1) / 2;
				break;
			case 2:
				i = (n - 1) / 2;
				j = 0;
				break;
			case 3:
				i = n - 1;
				j = (n - 1) / 2;
				break;
			case 4:
				i = (n - 1) / 2;
				j = n - 1;
				break;
			}//判斷開始位子
			square[i][j] = 1;//先填入1
			data = 2;
			while (data <= n * n) {
				switch (direction()) {
				case 1:
					k = (i - 1 < 0) ? n - 1 : i - 1;
					l = (j - 1 < 0) ? n - 1 : j - 1;
					break;//左上
				case 2:
					k = (i - 1 < 0) ? n - 1 : i - 1;
					l = (j + 1 == n) ? 0 : j + 1;
					break;//右上
				case 3:
					k = (i + 1 == n) ? 0 : i + 1;
					l = (j - 1 < 0) ? n - 1 : j - 1;
					break;//左下
				case 4:
					k = (i + 1 == n) ? 0 : i + 1;
					l = (j + 1 == n) ? 0 : j + 1;
					break;//右下
				}//判斷方向
				if (square[k][l] > 0) {
					switch (position_of_i()) {
					case 1:
						i = (i + 1) % n;//1在上，撞到向下移
						break;
					case 2:
						j = (j + 1) % n;//1在左，撞到向右移
						break;
					case 3:
						i = (i - 1 < 0) ? n - 1 : i - 1;//1在下，撞到向上移
						break;
					case 4:
						j = (j - 1 < 0) ? n - 1 : j - 1;//1在右，撞到向左移
						break;
					}
				}
				else {
					i = k;
					j = l;
				}
				square[i][j] = data++;
			}
		}
		void MagicSquare4(int n) {
			int i, j, num = 1, t;
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					square[i][j] = num++;//先將數字依序填入
			}
			for (i = n / 4; i < n / 4 * 3; i++) {
				for (j = 0; j < n / 2; j++)
					SWAP(square[i][j], square[i][n - j - 1], t);
			}
			for (i = n / 4; i < n / 4 * 3; i++) {
				for (j = 0; j < n / 2; j++)
					SWAP(square[j][i], square[n - j - 1][i], t);
			}//中間一半的行列前後互換
		}
		void printSquare(int n) {
			listBox1->Items->Add("--- Magic Square " + n + "X" + n + " ---");
			richTextBox1->AppendText("--- Magic Square " + n + "X" + n + " ---\n");
			int i, j, k;
			String^ line, ^ data_str = "";
			int block_len = Convert::ToString(n * n)->Length + 2;//固定每一格輸出的長度
			int blank_len = 0;
			for (i = 0; i < n; i++) {
				line = "";
				for (j = 0; j < n; j++) {
					data_str = Convert::ToString(square[i][j]);
					blank_len = block_len - data_str->Length;
					for (k = 0; k < blank_len; k++)
						line += " ";//預留空白使每格輸出長度相同
					line += data_str;
				}
				listBox1->Items->Add(line);
				richTextBox1->AppendText(line + "\n");
			}
			dataGridView1->ColumnCount = n;
			dataGridView1->RowCount = n;
			dataGridView1->AutoResizeRows();
			dataGridView1->AutoResizeColumns();
			for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++) {
					dataGridView1->Rows[i]->Cells[j]->Value = square[i][j];
				}
			}
			dataGridView1->DefaultCellStyle->BackColor = Color::White;
		}
		void selfcheck(int correctness) {
			if (correctness)
				listBox1->Items->Add("Incorrect Magic Square!");
			else
				listBox1->Items->Add("Correct Magic Square!");
			if (correctness)
				richTextBox1->AppendText("Incorrect Magic Square!\n");
			else
				richTextBox1->AppendText("Correct Magic Square!\n");
			if (correctness)
				dataGridView1->DefaultCellStyle->BackColor = Color::Crimson;//若錯誤，背景轉為紅色
			else
				dataGridView1->DefaultCellStyle->BackColor = Color::LightSkyBlue;
		}
		void printCheckedSquare(int n) {
			listBox1->Items->Add("--- Magic Square " + n + "X" + n + " ---");
			richTextBox1->AppendText("--- Magic Square " + n + "X" + n + " ---\n");
			int i, j, k;
			int sum = 0, sum1 = 0, sum2 = 0, ans = 0, flag = 0, correctness = 0;
			String^ line, ^ data_str = "", ^ checkresult = "";
			int block_len = Convert::ToString((n - 1) * (n - 1) * (n - 1) * (n - 1) - (n - 2) * (n - 2) * (n - 2) * (n - 2))->Length + 2;//固定每一格輸出的長度
			int blank_len = 0;
			for (i = 0; i < n; i++) {
				line = "";
				sum = 0;
				for (j = 0; j < n; j++) {
					sum += square[i][j];//行總和
					data_str = Convert::ToString(square[i][j]);
					blank_len = block_len - data_str->Length;
					for (k = 0; k < blank_len; k++)
						line += " ";
					line += data_str;
				}
				if (flag == 0)
					ans = sum;//保存第一個結果
				else {
					if (sum != ans)
						correctness = 1;//檢查其他行結果
				}
				line += "---->" + sum;
				listBox1->Items->Add(line);
				richTextBox1->AppendText(line + "\n");
			}
			for (i = 0; i < n; i++) {
				sum = 0;
				for (j = 0; j < n; j++) {
					sum += square[j][i];
				}
				if (sum != ans)
					correctness = 1;//檢查每列結果
				blank_len = block_len - Convert::ToString(sum)->Length;
				for (k = 0; k < blank_len - 1; k++)
					checkresult += " ";
				checkresult += "|" + sum;
			}//每列總和
			for (i = 0; i < n; i++)
				sum1 += square[i][i];
			for (k = 0; k < blank_len; k++)
				checkresult += " ";
			checkresult += "\\" + sum1;//左上-右下對角線總和
			for (i = 0; i < n; i++)
				sum2 += square[n - 1 - i][i];
			for (k = 0; k < blank_len; k++)
				checkresult += " ";
			checkresult += "/" + sum2;//右上-左下對角線總和
			if (sum1 != ans || sum2 != ans)
				correctness = 1;//檢查對角線結果
			listBox1->Items->Add(checkresult);
			richTextBox1->AppendText(checkresult + "\n");
			dataGridView1->ColumnCount = n + 1;
			dataGridView1->RowCount = n + 1;
			dataGridView1->AutoResizeRows();
			dataGridView1->AutoResizeColumns();
			for (i = 0; i < n; i++) {
				sum = 0;
				for (j = 0; j < n; j++) {
					sum += square[i][j];
					dataGridView1->Rows[i]->Cells[j]->Value = square[i][j];
				}
				dataGridView1->Rows[i]->Cells[n]->Value = sum;
			}//輸出行總和
			for (i = 0; i < n; i++) {
				sum = 0;
				for (j = 0; j < n; j++) {
					sum += square[j][i];
				}
				dataGridView1->Rows[n]->Cells[i]->Value = sum;
			}//輸出列總和
			dataGridView1->Rows[n]->Cells[n]->Value = "\\" + sum1 + " /" + sum2;//輸出對角線總和
			selfcheck(correctness);//判斷是否合法
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox1->Text);
		if ((n < 3) || (n > 37))
			MessageBox::Show("3<=n<=37");
		else if (!(n % 2) && (n % 4))
			MessageBox::Show("n需為奇數或4的倍數");
		else {
			if (n % 2)
				MagicSquare(n);
			else
				MagicSquare4(n);
			if (checkBox1->Checked)
				printCheckedSquare(n);
			else
				printSquare(n);
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radioButton5->Visible = 1;
		radioButton6->Visible = 1;
		radioButton7->Visible = (checkBox2->Checked) ? 1 : 0;
		radioButton8->Visible = (checkBox2->Checked) ? 1 : 0;
	}//判斷是否隱藏錯誤方向的按鈕

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radioButton5->Visible = 1;
		radioButton6->Visible = (checkBox2->Checked) ? 1 : 0;
		radioButton7->Visible = 1;
		radioButton8->Visible = (checkBox2->Checked) ? 1 : 0;
	}//判斷是否隱藏錯誤方向的按鈕
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radioButton5->Visible = (checkBox2->Checked) ? 1 : 0;
		radioButton6->Visible = (checkBox2->Checked) ? 1 : 0;
		radioButton7->Visible = 1;
		radioButton8->Visible = 1;
	}//判斷是否隱藏錯誤方向的按鈕

	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		radioButton5->Visible = (checkBox2->Checked) ? 1 : 0;
		radioButton6->Visible = 1;
		radioButton7->Visible = (checkBox2->Checked) ? 1 : 0;
		radioButton8->Visible = 1;
	}//判斷是否隱藏錯誤方向的按鈕
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox2->Checked) {
			radioButton5->Visible = 1;
			radioButton6->Visible = 1;
			radioButton7->Visible = 1;
			radioButton8->Visible = 1;
		}//顯示錯誤方向的按鈕
		else {
			switch (position_of_i()) {
			case 1:
				radioButton7->Visible = 0;
				radioButton8->Visible = 0;
				break;
			case 2:
				radioButton6->Visible = 0;
				radioButton8->Visible = 0;
				break;
			case 3:
				radioButton5->Visible = 0;
				radioButton6->Visible = 0;
				break;
			case 4:
				radioButton5->Visible = 0;
				radioButton7->Visible = 0;
				break;
			}
		}//隱藏錯誤方向的按鈕
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ input = textBox1->Text;
		if (input != "") {
			int n = int::Parse(textBox1->Text);
			if (!(n % 4)) {
				groupBox1->Visible = 0;
				groupBox2->Visible = 0;
			}//若輸入4的倍數，則隱藏選取起始位置及方向的按鈕

			else {
				groupBox1->Visible = 1;
				groupBox2->Visible = 1;
			}

		}
		else {
			groupBox1->Visible = 1;
			groupBox2->Visible = 1;
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		richTextBox1->Clear();
		dataGridView1->Rows->Clear();
		textBox1->Text = "";

	}
	};
}