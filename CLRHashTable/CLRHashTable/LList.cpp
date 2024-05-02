#include "LList.h"
namespace HashTable {
	void LList::grab()
	{
		if (this->next != nullptr) {
			this->data = this->next->data;
			this->next->grab();
		}
		else
		{
			this->data = nullptr;
		}
	}

	LList::LList()
	{
		this->data = nullptr;
		this->next = nullptr;
	}

	LList::LList(String^ autor, String^ genre, String^ name, String^ edition)
	{
		this->data = gcnew LLData(autor, genre, name, edition);
		this->next = nullptr;
	}

	void LList::add(String^ autor, String^ genre, String^ name, String^ edition)
	{
		if (this->data == nullptr) {
			this->data = gcnew LLData(autor, genre, name, edition);
			return;
		}
		if (this->next == nullptr) {
			this->next = gcnew LList(autor, genre, name, edition);
		}
		else {
			this->next->add(autor, genre, name, edition);
		}
	}


	void LList::deleteTailElem()
	{

		if (this->next != nullptr) {
			if (this->next->next == nullptr) {
				this->next = nullptr;
			}
			else {
				this->next->deleteTailElem();
			}
		}
	}

	void LList::deleteByIndex(int index)
	{
		if (this->next == nullptr && index > 0) {
			return;
		}
		if (index != 1) {
			this->next->deleteByIndex(index - 1);
		}
		else {
			this->next = this->next->next;
		}

	}
	void LList::deleteByName(String^ name)
	{
		if (this->data != nullptr) {
			//���� ��� � ������ ���������
			if (this->data->name == name) {
				//������ ������ ����� �������� ��������
				this->grab();

			}
			//���� ��� �� �������
			else {
				//� ���� ��������� �������
				if (this->next != nullptr) {
					//������ ��� ������� �� �����
					this->next->deleteByName(name);
				}
			}
		}
	}

	LLData^ LList::findData(const String^ name)
	{
		//���� ������ ����
		if (this->data != nullptr) {
			//���������, �� �� ���, ��� �� ������
			if (this->data->name == name) {
				//���� ��� ���������, ������������ ��������� �� ������
				return this->data;
			}
			//���� ��� �� ���������
			else {
				//���� ���� ��������� ������� � ������
				if (this->next != nullptr) {
					//������ � ���������� � ������ ����� ������
					return this->next->findData(name);
				}
			}
		}
		//���� ������� ������ �� �������
		//���������� ������
		else {
			return nullptr;
		}
	}

	String^ LList::print()
	{
		if (this->data == nullptr) {
			return this->data->ToString();
		}
		this->data->printData();
		if (this->next != nullptr) {
			this->next->print();
		}
	}

	array<String^>^ LList::getArray()
	{
		if (this->data == nullptr) {
			return nullptr;
		}
		int countElem = 0;
		LList^ tmp = this;
		while (tmp != nullptr) {
			countElem++;
			tmp = tmp->next;
		}
		array<String^>^ resultArray = gcnew array<String^>(countElem);
		tmp = this;
		int i = 0;
		while (tmp != nullptr) {
			resultArray[i] = tmp->data->printData();
			tmp = tmp->next;
			i++;
		}
		return resultArray;

	}

}