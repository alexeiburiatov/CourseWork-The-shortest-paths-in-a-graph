#include "Functions.h"
#include<fstream>
#include<filesystem>
string& Convert_String_to_string(String^ s, string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

String^ Convert_string_to_String(string& os, String^ s)
{
	s = gcnew System::String(os.c_str());
	return s;
}

string& Convert_String_to_string(String^ s)
{
	string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}

String^ Convert_string_to_String(string& os)
{
	System::String^ s = gcnew String(os.c_str());
	return s;
}

void ClearFile(string Filename)
{
	ofstream File(Filename, ios::out | ios::trunc);
	File.close();
	remove("reserved.txt");
}
