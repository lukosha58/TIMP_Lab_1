#include "encrypt.h"
using namespace std;

Encrypt::Encrypt(int key){
	Encrypt::cols = key;
}
void Encrypt::setMessage(wstring inputString){
	message = inputString;
}
void Encrypt::setEncryptMessage(wstring inputChiperedString){
	EncryptMessage = inputChiperedString;
}
wstring Encrypt::getMessage(){
	return message;
}
wstring Encrypt::getEncryptMessage(){
	return EncryptMessage;
}
wstring Encrypt::encrypt(){
	int rows;
	int cols = Encrypt::cols;
	wcin.clear();
	wcin.ignore(32767,'\n');
	wcout << L"Введите сообщение: ";
	getline(wcin,message);
	if(message.length()%cols!=0){
		rows = message.length() / cols +1;
	}else{
		rows = message.length() / cols;
	}
	while(((int)(message.length()) < cols*rows) == 1){
			message.push_back(' ');
		}
	EncryptMessage = message;
	int index_of_char = 0;
		for(int i=0; i < cols; i++){
			for(int j=0; j < rows; j++){
				EncryptMessage[index_of_char] = message[i+j*cols];
				index_of_char++;
			}
		}
	return EncryptMessage;
}

wstring Encrypt::decrypt(){
	int rows;
	int cols = Encrypt::cols;
	wcin.clear();
	wcin.ignore(32767,'\n');
	wcout << L"Введите сообщение: ";
	getline(wcin,EncryptMessage);
	rows = EncryptMessage.length()/cols;
	message = EncryptMessage;
	int index_of_char = 0;
		for(int i=0; i < cols; i++){
			for(int j=0; j < rows; j++){
				message[i+j*cols] = EncryptMessage[index_of_char];
				index_of_char++;
			}
		}
		while((char)(message[index_of_char-1])==' '){
			message.erase(index_of_char-1,1);
			index_of_char--;
		}
	return message;
}