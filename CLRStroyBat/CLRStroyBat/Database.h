#pragma once

namespace CLRStroyBat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class Database
	{
	public:

		SqlConnection^ Con = gcnew SqlConnection("Data Source=TIZKIZOY\\SQLEXPRESS;Initial Catalog=Plitka;Integrated Security=True;Connect Timeout=30;Encrypt=True;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");

		void clearEverythingTable()
		{
			SqlCommand^ command = gcnew SqlCommand("truncate table SaveSmeta", Con);
			SqlCommand^ command1 = gcnew SqlCommand("truncate table SaveTableWork", Con);
			SqlCommand^ command2 = gcnew SqlCommand("truncate table SaveTableMaterial", Con);
			SqlCommand^ command3 = gcnew SqlCommand("truncate table SaveTextBoxs", Con);

			command->ExecuteNonQuery();
			command1->ExecuteNonQuery();
			command2->ExecuteNonQuery();
			command3->ExecuteNonQuery();
		}

		void ChangeSaveSmetaTextBoxs(String^ data1, String^ data2, String^ data3, String^ data4, double total, String^ data5, String^ data6, String^ data7)
		{
			// Создание команды для вставки даSqlCommand^ command = gcnew SqlCommand(нных
			SqlCommand^ command = gcnew SqlCommand("update SaveSmeta set Дата = @value2, Наименование = @value3, Телефон = @value4, [Сумма, руб.] = @value5, [Начало работ] = @value6, [Окончание план] = @value7, [Конец работ] = @value8 where [№] = @value1", Con);

			// Добавление параметров
			command->Parameters->AddWithValue("@value1", data1->ToString());
			command->Parameters->AddWithValue("@value2", data2->ToString());
			command->Parameters->AddWithValue("@value3", data3->ToString());
			command->Parameters->AddWithValue("@value4", data4->ToString());
			command->Parameters->AddWithValue("@value5", Convert::ToString(total));
			command->Parameters->AddWithValue("@value6", data5->ToString());
			command->Parameters->AddWithValue("@value7", data6->ToString());
			command->Parameters->AddWithValue("@value8", data7->ToString());

			// Выполнение команды
			command->ExecuteNonQuery();
		}

		void RepeatChecFromSaveTableWork(DataGridView^ dgv, TextBox^ tx)
		{

			for each (DataGridViewRow ^ row in dgv->Rows) {
				if (!row->IsNewRow) {
					SqlCommand^ command = gcnew SqlCommand("SELECT COUNT(*) FROM SaveTableWork WHERE Наименование = @value1 AND Артикул = @value2 AND [Цена руб.] = @value3 AND Тип = @value4 AND [Ед.изм.] = @value5 AND Страна = @value6 AND [Цена $] = @value7 AND[idusdt] = @value8", Con);
					//command->Parameters->AddWithValue("@value1", name);
					//command->Parameters->AddWithValue("@value2", age);

					command->Parameters->AddWithValue("@value1", row->Cells[0]->Value->ToString());
					command->Parameters->AddWithValue("@value2", row->Cells[1]->Value->ToString());
					command->Parameters->AddWithValue("@value3", row->Cells[2]->Value->ToString());
					command->Parameters->AddWithValue("@value4", row->Cells[3]->Value->ToString());
					command->Parameters->AddWithValue("@value5", row->Cells[4]->Value->ToString());
					command->Parameters->AddWithValue("@value6", row->Cells[5]->Value->ToString());
					command->Parameters->AddWithValue("@value7", row->Cells[6]->Value->ToString());
					command->Parameters->AddWithValue("@value8", tx->Text);
					int count = Convert::ToInt32(command->ExecuteScalar());

					// Запись строки в таблицу, если она отсутствует
					if (count == 0)
					{ 
						SqlCommand^ command = gcnew SqlCommand("INSERT INTO SaveTableWork (Наименование,Артикул,[Цена руб.],Тип,[Ед.изм.],Страна,[Цена $],[idusdt]) Values (@value1,@value2,@value3,@value4,@value5,@value6,@value7,@value8)", Con);
						// Добавление параметров
						command->Parameters->AddWithValue("@value1", row->Cells[0]->Value->ToString());
						command->Parameters->AddWithValue("@value2", row->Cells[1]->Value->ToString());
						command->Parameters->AddWithValue("@value3", row->Cells[2]->Value->ToString());
						command->Parameters->AddWithValue("@value4", row->Cells[3]->Value->ToString());
						command->Parameters->AddWithValue("@value5", row->Cells[4]->Value->ToString());
						command->Parameters->AddWithValue("@value6", row->Cells[5]->Value->ToString());
						command->Parameters->AddWithValue("@value7", row->Cells[6]->Value->ToString());
						command->Parameters->AddWithValue("@value8", tx->Text);
						// Выполнение команды
						command->ExecuteNonQuery();
					}
				}
			}
		}

		void RepeatChecFromSaveTableMaterial(DataGridView^ dgv, TextBox^ tx)
		{

			for each (DataGridViewRow ^ row in dgv->Rows) {
				if (!row->IsNewRow) {
					SqlCommand^ command = gcnew SqlCommand("SELECT COUNT(*) FROM SaveTableMaterial WHERE Наименование = @value1 AND Артикул = @value2 AND [Цена руб.] = @value3 AND [Ед.изм.] = @value4 AND Страна = @value5 AND [Цена $] = @value6 AND Бренд = @value7 AND[idusd] = @value8", Con);

					command->Parameters->AddWithValue("@value1", row->Cells[0]->Value->ToString());
					command->Parameters->AddWithValue("@value2", row->Cells[1]->Value->ToString());
					command->Parameters->AddWithValue("@value3", row->Cells[2]->Value->ToString());
					command->Parameters->AddWithValue("@value4", row->Cells[3]->Value->ToString());
					command->Parameters->AddWithValue("@value5", row->Cells[4]->Value->ToString());
					command->Parameters->AddWithValue("@value6", row->Cells[5]->Value->ToString());
					command->Parameters->AddWithValue("@value7", row->Cells[6]->Value->ToString());
					command->Parameters->AddWithValue("@value8", tx->Text);
					int count = Convert::ToInt32(command->ExecuteScalar());

					// Запись строки в таблицу, если она отсутствует
					if (count == 0)
					{
						SqlCommand^ command = gcnew SqlCommand("INSERT INTO SaveTableMaterial (Наименование,Артикул,[Цена руб.],[Ед.изм.],Страна,[Цена $], Бренд,[idusd]) Values (@value1,@value2,@value3,@value4,@value5,@value6,@value7,@value8)", Con);
						// Добавление параметров
						command->Parameters->AddWithValue("@value1", row->Cells[0]->Value->ToString());
						command->Parameters->AddWithValue("@value2", row->Cells[1]->Value->ToString());
						command->Parameters->AddWithValue("@value3", row->Cells[2]->Value->ToString());
						command->Parameters->AddWithValue("@value4", row->Cells[3]->Value->ToString());
						command->Parameters->AddWithValue("@value5", row->Cells[4]->Value->ToString());
						command->Parameters->AddWithValue("@value6", row->Cells[5]->Value->ToString());
						command->Parameters->AddWithValue("@value7", row->Cells[6]->Value->ToString());
						command->Parameters->AddWithValue("@value8", tx->Text);
						// Выполнение команды
						command->ExecuteNonQuery();
					}
				}
			}
		}

		void ChangeSaveTextBox(String^ data1, String^ data2, String^ data3, String^ data4, String^ data5, String^ data6, String^ data7, String^ data8, String^ data9, String^ data10, TextBox^ tx)
		{
			// Создание команды для вставки данных
			SqlCommand^ command = gcnew SqlCommand("UPDATE SaveTextBoxs SET data1 = @value1, data2 = @value2, data3 = @value3, data4 = @value4, data5 = @value5, data6 = @value6, data7 = @value7, data8 = @value8, data9 = @value9, data10 = @value10 where idusd = @value11", Con);

			command->Parameters->AddWithValue("@value1", data1);
			command->Parameters->AddWithValue("@value2", data2);
			command->Parameters->AddWithValue("@value3", data3);
			command->Parameters->AddWithValue("@value4", data4);
			command->Parameters->AddWithValue("@value5", data5);
			command->Parameters->AddWithValue("@value6", data6);
			command->Parameters->AddWithValue("@value7", data7);
			command->Parameters->AddWithValue("@value8", data8);
			command->Parameters->AddWithValue("@value9", data9);
			command->Parameters->AddWithValue("@value10", data10);
			command->Parameters->AddWithValue("@value11", tx->Text);

			command->ExecuteNonQuery();
		}

		void InsertIntoSaveTextBox(String^ data1, String^ data2, String^ data3, String^ data4, String^ data5, String^ data6, String^ data7, String^ data8, String^ data9, String^ data10, TextBox^ tx)
		{
			// Создание команды для вставки данных
			SqlCommand^ command = gcnew SqlCommand("INSERT INTO SaveTextBoxs (data1,data2,data3,data4,data5,data6,data7,data8,data9,data10,idusd) Values (@value1,@value2,@value3,@value4,@value5,@value6,@value7,@value8,@value9,@value10,@value11)", Con);

			// Добавление параметров
			command->Parameters->AddWithValue("@value1", data1);
			command->Parameters->AddWithValue("@value2", data2);
			command->Parameters->AddWithValue("@value3", data3);
			command->Parameters->AddWithValue("@value4", data4);
			command->Parameters->AddWithValue("@value5", data5);
			command->Parameters->AddWithValue("@value6", data6);
			command->Parameters->AddWithValue("@value7", data7);
			command->Parameters->AddWithValue("@value8", data8);
			command->Parameters->AddWithValue("@value9", data9);
			command->Parameters->AddWithValue("@value10", data10);
			command->Parameters->AddWithValue("@value11", tx->Text);

			// Выполнение команды
			command->ExecuteNonQuery();
		}

		void InsertIntoSaveWork(DataGridView^ dgv, TextBox^ tx)
		{
			// Перебор всех строк DataGridView
			for each (DataGridViewRow ^ row in dgv->Rows) {
				if (!row->IsNewRow) {
					// Создание команды для вставки данных
					SqlCommand^ command = gcnew SqlCommand("INSERT INTO SaveTableWork (Наименование,Артикул,[Цена руб.],Тип,[Ед.изм.],Страна,[Цена $],[idusdt]) Values (@value1,@value2,@value3,@value4,@value5,@value6,@value7,@value8)", Con);

					// Добавление параметров
					command->Parameters->AddWithValue("@value1", row->Cells[0]->Value->ToString());
					command->Parameters->AddWithValue("@value2", row->Cells[1]->Value->ToString());
					command->Parameters->AddWithValue("@value3", row->Cells[2]->Value->ToString());
					command->Parameters->AddWithValue("@value4", row->Cells[3]->Value->ToString());
					command->Parameters->AddWithValue("@value5", row->Cells[4]->Value->ToString());
					command->Parameters->AddWithValue("@value6", row->Cells[5]->Value->ToString());
					command->Parameters->AddWithValue("@value7", row->Cells[6]->Value->ToString());
					command->Parameters->AddWithValue("@value8", tx->Text);
					// Выполнение команды
					command->ExecuteNonQuery();

				}
			}
		}

		void InsertIntoSaveMaterials(DataGridView^ dgv, TextBox^ tx)
		{
			// Перебор всех строк DataGridView
			for each (DataGridViewRow ^ row in dgv->Rows) {
				if (!row->IsNewRow) {
					// Создание команды для вставки данных
					SqlCommand^ command = gcnew SqlCommand("INSERT INTO SaveTableMaterial (Наименование,Артикул,[Цена руб.],[Ед.изм.],Страна,[Цена $], Бренд,[idusd]) Values (@value1,@value2,@value3,@value4,@value5,@value6,@value7,@value8)", Con);

					// Добавление параметров
					command->Parameters->AddWithValue("@value1", row->Cells[0]->Value->ToString());
					command->Parameters->AddWithValue("@value2", row->Cells[1]->Value->ToString());
					command->Parameters->AddWithValue("@value3", row->Cells[2]->Value->ToString());
					command->Parameters->AddWithValue("@value4", row->Cells[3]->Value->ToString());
					command->Parameters->AddWithValue("@value5", row->Cells[4]->Value->ToString());
					command->Parameters->AddWithValue("@value6", row->Cells[5]->Value->ToString());
					command->Parameters->AddWithValue("@value7", row->Cells[6]->Value->ToString());
					command->Parameters->AddWithValue("@value8", tx->Text);;
					// Выполнение команды
					command->ExecuteNonQuery();

				}
			}
		}

		void InsertIntoSaveSmetaTextBoxs(String^ data1, String^ data2, String^ data3, String^ data4, double total, String^ data5, String^ data6, String^ data7)
		{
			// Создание команды для вставки данных
			SqlCommand^ command = gcnew SqlCommand("INSERT INTO SaveSmeta ([№],Дата, Наименование, Телефон, [Сумма, руб.], [Начало работ], [Окончание план], [Конец работ]) Values (@value1,@value2,@value3,@value4,@value5,@value6,@value7,@value8)", Con);

			// Добавление параметров
			command->Parameters->AddWithValue("@value1", data1->ToString());
			command->Parameters->AddWithValue("@value2", data2->ToString());
			command->Parameters->AddWithValue("@value3", data3->ToString());
			command->Parameters->AddWithValue("@value4", data4->ToString());
			command->Parameters->AddWithValue("@value5", Convert::ToString(total));
			command->Parameters->AddWithValue("@value6", data5->ToString());
			command->Parameters->AddWithValue("@value7", data6->ToString());
			command->Parameters->AddWithValue("@value8", data7->ToString());

			// Выполнение команды
			command->ExecuteNonQuery();
		}

		DataTable^ getTableSmeta(DataGridView^ dgv)
		{
			/*dgv->Rows->Clear();*/
			String^ querystring = "select [№],Дата, Наименование, Телефон, [Сумма, руб.], [Начало работ], [Окончание план], [Конец работ] from SaveSmeta";
			SqlCommand^ command = gcnew SqlCommand(querystring, Con);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dtR = gcnew DataTable();
			adapter->Fill(dtR);
			dgv->AllowUserToAddRows = false;
			return dtR;
		}

		DataTable^ getTableWork()
		{
			String^ querystring = "select Наименование, Артикул, [Цена руб.], Тип, [Ед.изм.], Страна, [Цена $] from Worki";
			SqlCommand^ command = gcnew SqlCommand(querystring, Con);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dtR = gcnew DataTable();
			adapter->Fill(dtR);
			return dtR;
		}

		DataTable^ getTableWorkZakup()
		{
			String^ querystring = "select Наименование, Артикул, [Цена руб.], Тип, [Ед.изм.], Страна, [Цена $] from WorkZakup";
			SqlCommand^ command = gcnew SqlCommand(querystring, Con);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dtR = gcnew DataTable();
			adapter->Fill(dtR);
			return dtR;
		}

		DataTable^ getTableMaterial()
		{
			String^ querystring = "select Наименование,Артикул,[Цена руб.],[Ед.изм.],Страна,[Цена $],Бренд from Material";
			SqlCommand^ command = gcnew SqlCommand(querystring, Con);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dtR = gcnew DataTable();
			adapter->Fill(dtR);
			return dtR;
		}

		DataTable^ getTableMaterialZakup()
		{
			String^ querystring = "select Наименование,Артикул,[Цена руб.],[Ед.изм.],Страна,[Цена $],Бренд from MaterialZakup";
			SqlCommand^ command = gcnew SqlCommand(querystring, Con);
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
			DataTable^ dtR = gcnew DataTable();
			adapter->Fill(dtR);
			return dtR;
		}

		void openConnection()
		{
			if (CLRStroyBat::Database::Con->State == System::Data::ConnectionState::Closed)
			{
				Con->Open();
			}
		}

		void closeConnection()
		{
			if (Con->State == System::Data::ConnectionState::Open)
			{
				Con->Close();
			}
		}

		SqlConnection^ getConnection()
		{
			return Con;
		}

	};

}