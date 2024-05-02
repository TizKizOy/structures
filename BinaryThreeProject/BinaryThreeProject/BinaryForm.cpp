#include "BinaryForm.h"
#include <Windows.h>
using namespace BinaryThreeProject;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew BinaryForm());
	return 0;

}