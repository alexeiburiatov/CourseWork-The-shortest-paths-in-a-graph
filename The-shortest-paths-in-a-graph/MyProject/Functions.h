#pragma once
#include<iostream>
#include"Data.h"
#include<string>

using namespace std;
using namespace System;

string& Convert_String_to_string(String^ s, string& os);// string^ � string
String^ Convert_string_to_String(string& os, String^ s);// string � string^
string& Convert_String_to_string(String^ s);// string^ � string
String^ Convert_string_to_String(string& os);// string � string^
void ClearFile(string Filename);
String^ Convert_num_to_String(int data);
String^ Convert_num_to_String(double data);
int Convert_String_to_num(String^ data);
