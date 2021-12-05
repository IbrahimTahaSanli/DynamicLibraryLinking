#include <Windows.h>

typedef const char* getStr(int);

int _stdcall WinMain() {
	HMODULE module = LoadLibrary(L"opengl32.dll");
	getStr* glGetString = (getStr*)GetProcAddress(module, "glGetString");
	//getStr* glGetString = (getStr*)wglGetProcAddress("glGetString"); <= For OpenGL

	return 0;

}