#include "MyForm.h"
#include <Windows.h>
using namespace CLRQueue;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::Run(gcnew CLRQueueForm());
}
