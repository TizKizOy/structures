#pragma once
#include "SmetaForm.h"
#include "MaterialsForm.h"
#include "WorkForm.h"
#include "PlitkaForm.h"
#include "SettingsForm.h"
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
	/// Сводка для MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();

			this->Text = "Parent Form";
			this->WindowState = FormWindowState::Maximized;
			this->StartPosition = FormStartPosition::CenterScreen;

			//// Создание кнопки для открытия дочерней формы
			//Button^ openChildButton = gcnew Button();
			//openChildButton->Text = "Open Child Form";
			//openChildButton->Location = Point(100, 100);
			//openChildButton->Click += gcnew EventHandler(this, &MenuForm::OpenChildForm);

			//this->Controls->Add(openChildButton);


			
		}

		//void OpenChildForm(Object^ sender, EventArgs^ e)
		//{
		//	WorkForm^ childForm = gcnew WorkForm();
		//	childForm->Owner = this;
		//	childForm->Show();
		//}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ основноеToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ сметыToolStripMenuItem1;



	private: System::Windows::Forms::ToolStripMenuItem^ работыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ материалыToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ настройкиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ настройкаРабочегоМестаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменениеКурсаВалютToolStripMenuItem;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->основноеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкаРабочегоМестаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменениеКурсаВалютToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сметыToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->материалыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->основноеToolStripMenuItem,
					this->сметыToolStripMenuItem1, this->работыToolStripMenuItem, this->материалыToolStripMenuItem, this->настройкиToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(2053, 49);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// основноеToolStripMenuItem
			// 
			this->основноеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->настройкаРабочегоМестаToolStripMenuItem,
					this->изменениеКурсаВалютToolStripMenuItem
			});
			this->основноеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->основноеToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"основноеToolStripMenuItem.Image")));
			this->основноеToolStripMenuItem->Name = L"основноеToolStripMenuItem";
			this->основноеToolStripMenuItem->Size = System::Drawing::Size(178, 45);
			this->основноеToolStripMenuItem->Text = L"Главная";
			this->основноеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::основноеToolStripMenuItem_Click);
			// 
			// настройкаРабочегоМестаToolStripMenuItem
			// 
			this->настройкаРабочегоМестаToolStripMenuItem->Name = L"настройкаРабочегоМестаToolStripMenuItem";
			this->настройкаРабочегоМестаToolStripMenuItem->Size = System::Drawing::Size(524, 50);
			this->настройкаРабочегоМестаToolStripMenuItem->Text = L"Настройка рабочего места";
			// 
			// изменениеКурсаВалютToolStripMenuItem
			// 
			this->изменениеКурсаВалютToolStripMenuItem->Name = L"изменениеКурсаВалютToolStripMenuItem";
			this->изменениеКурсаВалютToolStripMenuItem->Size = System::Drawing::Size(524, 50);
			this->изменениеКурсаВалютToolStripMenuItem->Text = L"Изменение курса валют";
			// 
			// сметыToolStripMenuItem1
			// 
			this->сметыToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->сметыToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сметыToolStripMenuItem1.Image")));
			this->сметыToolStripMenuItem1->Name = L"сметыToolStripMenuItem1";
			this->сметыToolStripMenuItem1->Size = System::Drawing::Size(159, 45);
			this->сметыToolStripMenuItem1->Text = L"Сметы";
			this->сметыToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MenuForm::сметыToolStripMenuItem1_Click);
			// 
			// работыToolStripMenuItem
			// 
			this->работыToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->работыToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"работыToolStripMenuItem.Image")));
			this->работыToolStripMenuItem->Name = L"работыToolStripMenuItem";
			this->работыToolStripMenuItem->Size = System::Drawing::Size(170, 45);
			this->работыToolStripMenuItem->Text = L"Работы";
			this->работыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::работыToolStripMenuItem_Click);
			// 
			// материалыToolStripMenuItem
			// 
			this->материалыToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->материалыToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"материалыToolStripMenuItem.Image")));
			this->материалыToolStripMenuItem->Name = L"материалыToolStripMenuItem";
			this->материалыToolStripMenuItem->Size = System::Drawing::Size(227, 45);
			this->материалыToolStripMenuItem->Text = L"Материалы";
			this->материалыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::материалыToolStripMenuItem_Click);
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->настройкиToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"настройкиToolStripMenuItem.Image")));
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(217, 45);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			this->настройкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::настройкиToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->выходToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"выходToolStripMenuItem.Image")));
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(156, 45);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuForm::выходToolStripMenuItem_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(2053, 1162);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	
	private: System::Void основноеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void сметыToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		SmetaForm^ f3 = gcnew SmetaForm();
		f3->Show();
	}
	private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Меню";// Задаёт название формы
		this->Top = 0; //Задаёт расстояние верхней границы
		this->Left = 0; //левой границы
		this->Width = Screen::PrimaryScreen->WorkingArea.Width;
		this->Height = Screen::PrimaryScreen->WorkingArea.Height;


		PlitkaForm^ f4 = gcnew PlitkaForm();
		f4->Show();

	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		auto result = MessageBox::Show(
			"Вы действительно хотите выйти из программы?",
			"Подтвердите выход",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}

	private: System::Void работыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
	
		/*OpenChildForm(sender, e);*/
		
		WorkForm^ f1 = gcnew WorkForm();
		f1->Show();
		//MenuForm^ f6 = gcnew MenuForm();
		//// Создайте дочернюю форму

		//f6->TopLevel = false;
		////f6->Parent = f1; // где parentForm - это родительская форма
		////f6->StartPosition = FormStartPosition::CenterParent;
		////f1->Controls->Add(f6);

		//// Обеспечьте границы дочерней формы в пределах родительской формы
		//f6->MaximumSize = f1->ClientSize;
		//f6->MinimumSize = f1->ClientSize;
		//f1->Show();
	}
	private: System::Void материалыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MaterialsForm^ f2 = gcnew MaterialsForm();
		f2->Show();
	}
	private: System::Void настройкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SettingsForm^ f5 = gcnew SettingsForm();
		f5->Show();


	}
	};
}