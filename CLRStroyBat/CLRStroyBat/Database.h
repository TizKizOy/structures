#pragma once

namespace CLRStroyBat {

	using namespace System;
	using namespace System::Data::SqlClient;// для подключения sql


	public ref class Database
	{
	public:

	
		//Database() {
		//	dbConn = gcnew SqlConnection("Data Source=.\\SQLEXPRESS;Database=master; User ID=eva;pwd=eva");
		//	this->openConnection();
		//}
		//подключения базы данных
		SqlConnection^ Con = gcnew SqlConnection("Data Source=TIZKIZOY\\SQLEXPRESS;Integrated Security=True;Connect Timeout=30;Encrypt=True;TrustServerCertificate=True;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");

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