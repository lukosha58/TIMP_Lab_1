#include <iostream>
#include <cctype>
#include "modAlphaCipher.h"
using namespace std;


int main(int argc, char **argv)
{
	setlocale( LC_ALL, "" );
	std::locale loc("ru_RU.UTF-8");
	std::locale::global(loc);
	wstring key;
	wstring text;
	unsigned op;
	wcout<<L"Cipher ready. Input key:";
	wcin >> key;
	wcout<<L"Key loaded\n";
	modAlphaCipher cipher(key);
	do {
		wcout<<L"Cipher ready. Input operation (0-exit, 1-encrypt, 2-decrypt): ";
		wcin >> op;
		if(op > 2) {
			wcout <<L"Illegal operation\n";
		} else if (op > 0) {
			wcout << L"Cipher ready. Input text: ";
			wcin >> text;
			if(op==1) {
				wcout <<L"Encrypted text: " << cipher.encrypt(text) << endl;
			} else {
				wcout <<L"Decrypt text: " << cipher.decrypt(text) << endl;
			}
		} else {
			wcout << L"Operation aborted :: invalid text\n";
		}
	} while (op!=0);
	return 0;
}
