//#pragma once

#include "LList.h"

namespace HashTable {
	using namespace System;

	ref class HasTable
	{

	private:
		array< LList^>^ mas = nullptr;
		int size;
		int hashFuction(String^ name);
	public:
		HasTable();
		HasTable(int size);
		void add(String^ autor, String^ genre, String^ name, String^ edition);
		void remove(String^ autor, String^ genre, String^ name, String^ edition);
		LLData^ findElem(String^ name);
		String^ print();
		array<array<String^>^>^ getAllDataString();
	};

	ref class HashTableData
	{
	public:
		HashTableData();
		HashTableData(String^ autor, String^ genre, String^ name, String^ edition);

		String^ GetData();
		String^ editionBook(String^ edition);

		String^ autor;
		String^ genre;
		String^ name;
		String^ edition;
		HashTableData^ next;
		HashTableData^ current;
	};


};

