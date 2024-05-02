#pragma once
namespace HashTable {
	using namespace System;

	ref struct LLData {
		LLData() {
		};
		LLData(String^ autor, String^ genre, String^ name, String^ edition) {
			this->autor = autor;
			this->genre = genre;
			this->name = name;
			this->edition = edition;
		}

		String^ autor;
		String^ genre;
		String^ name;
		String^ edition;

		String^ printData() {
			return
				this->autor + " " + this->genre +" " +
				this->name +" "+ this->edition + " ";
		}
	};

	ref class LList
	{
		LLData^ data = nullptr;
		LList^ next = nullptr;
		void grab();
	public:
		LList();
		LList(String^ autor, String^ genre, String^ name, String^ edition);
		void add(String^ autor, String^ genre, String^ name, String^ edition);

		void deleteTailElem();
		void deleteByIndex(int index);
		void deleteByName(String^ name);
		LLData^ findData(const String^ s);
		String^ print();
		array<String^>^ getArray();

	};
}