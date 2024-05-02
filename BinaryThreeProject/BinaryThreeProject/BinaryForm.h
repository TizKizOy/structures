#pragma once
#include"BinaryTreeClass.h"
namespace BinaryThreeProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для BinaryForm
	/// </summary>
	public ref class BinaryForm : public System::Windows::Forms::Form
	{
	public:
		BinaryForm(void)
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
		~BinaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(94, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Номер книги:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(304, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Автор:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(454, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Название:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(642, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Год издания:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(825, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Издательство:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1024, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(222, 25);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Количество страниц:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(291, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 31);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(469, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 31);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(667, 139);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 31);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(860, 139);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 31);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1076, 139);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 31);
			this->textBox6->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 118);
			this->button1->TabIndex = 12;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BinaryForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(546, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 118);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &BinaryForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(988, 243);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 118);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Find";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &BinaryForm::button3_Click);
			// 
			// BinaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1371, 554);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"BinaryForm";
			this->Text = L"BinaryForm";
			this->Load += gcnew System::EventHandler(this, &BinaryForm::BinaryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		TreeClass^ ksenzll = nullptr;
	private: System::Void BinaryForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ksenzll = gcnew BinaryThreeProject::TreeClass();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ksenzll->add(gcnew BinaryThreeProject::TreeData(
				textBox1->Text,
				textBox2->Text,
				textBox3->Text,
				textBox4->Text,
				textBox5->Text,
				textBox6->Text)
			);
			MessageBox::Show(this, "Данные успешно добавлены", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ksenzll)
		{
			MessageBox::Show(this, "Данные не добавлены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ksenzll->remove(textBox1->Text);
			MessageBox::Show(this, "Данные успешно удалены", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ksenzll)
		{
			MessageBox::Show(this, "Данные не удалены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			ksenzll->find(textBox1->Text);
			MessageBox::Show(this, "Данные успешно найдены", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ksenzll)
		{
			MessageBox::Show(this, "Данные не найдены", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
