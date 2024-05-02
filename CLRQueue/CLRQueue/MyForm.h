#pragma once
#include "Class.h"
namespace CLRQueue {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ CLRQueueForm
	/// </summary>
	public ref class CLRQueueForm : public System::Windows::Forms::Form
	{
	public:
		CLRQueueForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~CLRQueueForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbName;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbAge;

	private: System::Windows::Forms::Button^ btnPush;
	private: System::Windows::Forms::Button^ btnPop;
	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->btnPush = (gcnew System::Windows::Forms::Button());
			this->btnPop = (gcnew System::Windows::Forms::Button());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(46, 75);
			this->tbName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbName->Multiline = true;
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(161, 42);
			this->tbName->TabIndex = 0;
			this->tbName->TextChanged += gcnew System::EventHandler(this, &CLRQueueForm::tbName_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Регистр. номер\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &CLRQueueForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(271, 36);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Автор\r\n";
			this->label2->Click += gcnew System::EventHandler(this, &CLRQueueForm::label2_Click);
			// 
			// tbAge
			// 
			this->tbAge->Location = System::Drawing::Point(242, 75);
			this->tbAge->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tbAge->Multiline = true;
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(156, 42);
			this->tbAge->TabIndex = 3;
			this->tbAge->TextChanged += gcnew System::EventHandler(this, &CLRQueueForm::tbAge_TextChanged);
			// 
			// btnPush
			// 
			this->btnPush->Location = System::Drawing::Point(97, 195);
			this->btnPush->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnPush->Name = L"btnPush";
			this->btnPush->Size = System::Drawing::Size(216, 106);
			this->btnPush->TabIndex = 4;
			this->btnPush->Text = L"PUSH";
			this->btnPush->UseVisualStyleBackColor = true;
			this->btnPush->Click += gcnew System::EventHandler(this, &CLRQueueForm::btnPush_Click);
			// 
			// btnPop
			// 
			this->btnPop->Location = System::Drawing::Point(364, 195);
			this->btnPop->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnPop->Name = L"btnPop";
			this->btnPop->Size = System::Drawing::Size(238, 106);
			this->btnPop->TabIndex = 5;
			this->btnPop->Text = L"POP";
			this->btnPop->UseVisualStyleBackColor = true;
			this->btnPop->Click += gcnew System::EventHandler(this, &CLRQueueForm::btnPop_Click);
			// 
			// lblOutput
			// 
			this->lblOutput->AutoSize = true;
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOutput->Location = System::Drawing::Point(208, 384);
			this->lblOutput->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(130, 44);
			this->lblOutput->TabIndex = 6;
			this->lblOutput->Text = L"label3";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(430, 75);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 42);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CLRQueueForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(622, 75);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 42);
			this->textBox2->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(437, 36);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 25);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Название";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(617, 36);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Год издания";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(814, 75);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 42);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &CLRQueueForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1001, 75);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(156, 42);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &CLRQueueForm::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(830, 36);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 25);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Издательства\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &CLRQueueForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1025, 36);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Страниц\r\n";
			// 
			// CLRQueueForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2048, 718);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblOutput);
			this->Controls->Add(this->btnPop);
			this->Controls->Add(this->btnPush);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbName);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"CLRQueueForm";
			this->Text = L"CLRQueueForm";
			this->Load += gcnew System::EventHandler(this, &CLRQueueForm::CLRQueueForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: CLRQueueProject::CLRQueueClass^ eva;
	private: System::Void btnPush_Click(System::Object^ sender, System::EventArgs^ e) {
		eva->Push(
			tbName->Text,
			tbAge->Text,
			textBox1->Text,
			textBox2->Text,
			textBox3->Text,
			textBox4->Text
		);
	}
	private: System::Void CLRQueueForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->eva = gcnew 	CLRQueueProject::CLRQueueClass();
	}
	private: System::Void btnPop_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			lblOutput->Text = eva->Pop();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbAge_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}