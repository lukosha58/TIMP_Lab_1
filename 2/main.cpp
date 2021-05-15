#include <iostream>
#include <string>
#include <locale>
#include "encrypt.h"
//#include <codecvt>
using namespace std;

int main()
{
	int mode, inputKey;
	std::locale::global( std::locale("ru_RU.UTF-8") );
	wcout << L"Введите количество столбцов: ";
	wcin >> inputKey;
	wcout << L"0-Зашифровать\n1-Расшифровать\nВыберите режим: ";
	Encrypt encryptor(inputKey);
	if(!(wcin >> mode)){
			wcout << L"Выбран неверный режим" << endl;
			return 1;
	}
	
	if(mode == 0){
	encryptor.encrypt();
	wcout << encryptor.getEncryptMessage() << endl;
	}
	
	else if (mode == 1){
	encryptor.decrypt();
	wcout << encryptor.getMessage() << endl;
	}
	
	else{
		wcout << L"Выбран неверный режим" << endl;
	}
	return 0;
}