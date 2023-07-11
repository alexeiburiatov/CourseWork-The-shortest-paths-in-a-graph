#pragma once
#include<iostream>
#include"Data.h"
#include<string>

using namespace std;
using namespace System;

string& Convert_String_to_string(String^ s, string& os);// string^ â string
String^ Convert_string_to_String(string& os, String^ s);// string â string^
string& Convert_String_to_string(String^ s);// string^ â string
String^ Convert_string_to_String(string& os);// string â string^
void ClearFile(string Filename);
String^ Convert_num_to_String(int data);
String^ Convert_num_to_String(double data);
int Convert_String_to_num(String^ data);
