#include "HashTableForm.h"

#include <Windows.h>
using namespace CLRHashTable;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::Run(gcnew HashTableForm());
}