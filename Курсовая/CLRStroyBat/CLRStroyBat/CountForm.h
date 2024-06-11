#pragma once
#include "Delegat.h"
namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CountForm
	/// </summary>
	public ref class CountForm : public System::Windows::Forms::Form
	{
	private:
		DataGridViewRow^ sR;
		returnNumber^ delog;
	public:
		CountForm(returnNumber^ sender, DataGridViewRow^ selectedRow)
		{
			InitializeComponent();
			delog = sender;
			sR = selectedRow;
			data(sR);
		}

	public:
		CountForm(void)
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
		~CountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(56, 160);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 46);
			this->textBox1->TabIndex = 13;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(69, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Цена:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(320, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 29);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Количество:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(353, 175);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 31);
			this->numericUpDown1->TabIndex = 10;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &CountForm::numericUpDown1_ValueChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(371, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 53);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CountForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(231, 301);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 53);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Ок";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CountForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(68, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 31);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// CountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 402);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"CountForm";
			this->Text = L"CountForm";
			this->Load += gcnew System::EventHandler(this, &CountForm::CountForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void data(DataGridViewRow^ sR)
	{
		label1->Text = sR->Cells[0]->Value->ToString();
		textBox1->Text = sR->Cells[2]->Value->ToString();
	}
	public: void DataOF()
	{
		Decimal number = numericUpDown1->Value;
		// Если вам нужно преобразовать его в другой тип, например, в int
		String^ kolNum = Convert::ToString(numericUpDown1->Value);
		delog(kolNum);
	}
	private: System::Void CountForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Выбор количества";

	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		NumericUpDown^ nud = gcnew NumericUpDown();
		numericUpDown1->Minimum = 1;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numericUpDown1->Value > 0)
		{
			DataOF();
			MessageBox::Show("Позиция добавлена");
			this->Close();
		}
		else
		{
			MessageBox::Show("Выберите количество.");
		}
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
