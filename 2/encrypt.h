#pragma once
#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;

class Encrypt{
private:
	wstring message, EncryptMessage;
	
	void setMessage(wstring inputString);
	void setEncryptMessage(wstring inputEncryptString);
	
public:
	int cols;
	wstring getMessage();
	wstring getEncryptMessage();
	wstring encrypt();
	wstring decrypt();
	Encrypt() = delete;
	Encrypt(const int inputKey);
};