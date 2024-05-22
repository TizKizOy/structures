#pragma once
#include "Database.h"

namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Сводка для PlitkaForm
	/// </summary>
	public ref class PlitkaForm : public System::Windows::Forms::Form
	{
	public:
		Database^ database = gcnew Database();
		SqlConnection^ Con;
		DataTable^ dtRegistr;
		DataTable^ dtWork;
	private: System::Windows::Forms::TextBox^ textBox2;
	public:
		DataTable^ dtMaterials;


		PlitkaForm(void)
		{
			InitializeComponent();
			StartPosition = FormStartPosition::CenterScreen;//чтобы форма запускалась по центру экрана

			
			dtRegistr = gcnew DataTable();
			dtWork = gcnew DataTable();
			dtMaterials = gcnew DataTable();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PlitkaForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;






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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(341, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PlitkaForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(98, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Логин:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(75, 225);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(264, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(358, 49);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Добро пожаловать";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(273, 141);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 42);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(273, 225);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '1';
			this->textBox2->Size = System::Drawing::Size(349, 42);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &PlitkaForm::textBox2_TextChanged);
			// 
			// PlitkaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(885, 444);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"PlitkaForm";
			this->Text = L"PlitkaForm";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &PlitkaForm::PlitkaForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PlitkaForm_Load(System::Object^ sender, System::EventArgs^ e) {

		this->Text = "Авторизация";// Задаёт название формы
		if (textBox2->Text == "")
		{
			textBox2->PasswordChar = '\0';
			textBox1->MaxLength = 50;
			textBox2->MaxLength = 50;
			//	//textBox2->Text = "Введите свой пароль";//подсказка
			//	//textBox2->ForeColor = Color::Gray;
		}

		try {
			SqlConnection^ Con = gcnew SqlConnection("Data Source=TIZKIZOY\\SQLEXPRESS;Integrated Security=True;Connect Timeout=30;Encrypt=True;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
			Con->Open();
		}
		catch (SqlException^ e) {
			MessageBox::Show("Ошибка при подключении к базе данных: " + e->Message);
			Application::Exit();
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ Con = gcnew SqlConnection("Data Source=TIZKIZOY\\SQLEXPRESS;Initial Catalog=Plitka;Integrated Security=True;Connect Timeout=30;Encrypt=True;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
		Con->Open();
		String^ login = textBox1->Text;
		String^ password = textBox2->Text;
		String^ querystring = "select * from Registr where login = \'" + login + "\' and password = \'" + password + "\'";
		SqlCommand^ command = gcnew SqlCommand(querystring, Con);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
		DataTable^ dtR = gcnew DataTable();
		adapter->Fill(dtR);

		if (dtR->Rows->Count == 1)
		{
			MessageBox::Show("Вы успешно зашли!", "Успешно!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		else MessageBox::Show("Такого аккаунта не существует!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		Con->Close();
		/*MySqlConnection^ dbConn = gcnew MySqlConnection("Server=Plitka; Database=плитка; Uid=root; Pwd=Lavka1997;");
		MySqlCommand^ dbCmd = gcnew MySqlCommand("SELECT * FROM TableName", dbConn);
		MySqlDataAdapter^ dataAdapter = gcnew MySqlDataAdapter(dbCmd);
		DataSet^ dataSet = gcnew DataSet();

		dbConn->Open();
		dataAdapter->Fill(dataSet);
		dbConn->Close();

		DataGridView1->DataSource = dataSet->Tables[0];*/

	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		textBox2->PasswordChar = '*';
	}
};


}


