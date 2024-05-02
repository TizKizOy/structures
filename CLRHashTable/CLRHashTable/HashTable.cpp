#include "HashTable.h"
namespace HashTable {
	using namespace System;

	int HashTable::HasTable::hashFuction(String^ name)
	{
		int result = 0;
		for (int i = 0; i < name->Length; i++) {
			result += int(name[i]);
		}
		if (result >= this->size) {
			result %= this->size;
		}
		return result;
	}

	HashTable::HasTable::HasTable()
	{
		this->size = 10;
		mas = gcnew array<LList^>(this->size);
		for (int i = 0; i < this->size; i++) {
			mas[i] = gcnew LList();
		}
	}

	HashTable::HasTable::HasTable(int size)
	{
		this->size = size;
		mas = gcnew array<LList^>(this->size);
	}

	void HashTable::HasTable::add(String^ autor, String^ genre, String^ name, String^ edition)
	{
		mas[
			this->hashFuction(name)
		]->add(autor, genre, name, edition);

	}

	void HashTable::HasTable::remove(String^ autor, String^ genre, String^ name, String^ edition)
	{
		mas[this->hashFuction(name)]->deleteByName(name);
	}

	LLData^ HashTable::HasTable::findElem(String^ name)
	{

		return mas[this->hashFuction(name)]->findData(name);
	}

	HashTable::HashTableData::HashTableData() {

		this->autor = nullptr;
		this->genre = nullptr;
		this->name = nullptr;
		this->edition = nullptr;
		this->next = nullptr;
	}

	HashTable::HashTableData::HashTableData(String^ autor, String^ genre, String^ name, String^ edition) {

		this->autor = autor;
		this->genre = genre;
		this->name = name;
		this->edition = edition;
		this->next = nullptr;
	}

	String^ HashTable::HashTableData::GetData()
	{
		return
			"Автор: " + this->autor +
			". Жанр:" + this->genre +
			". Название: " + this->name +
			". Тираж: " + this->edition;
	}

	String^ HashTable::HashTableData::editionBook(String^ edition)
	{
		int a = Convert::ToInt32(edition);
		if (a >= 1000)
		{
			String^ toReturn = current->GetData();
			this->current = this->current->next;
			return toReturn;
		}
	}

	String^ HasTable::print()
	{

		for (int i = 0; i < this->size; i++) {
			return mas[i]->print();
		}

	}
	array<array<String^>^>^ HasTable::getAllDataString()
	{
		array<array<String^>^>^ returnMas = gcnew array<array<String^>^>(this->size);
		for (int i = 0; i < this->size; i++) {
			returnMas[i] = mas[i]->getArray();
		}
		return returnMas;

	}

}