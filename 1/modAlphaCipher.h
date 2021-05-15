#pragma once
#include <vector>
#include <string>
#include <map>
 
class modAlphaCipher
{
private:
	
	std::map <char,int> alphaNum;
	std::vector <int> key;
	std::vector <int> convert(const std::wstring& s);
	std::wstring convert(const std::vector<int>& v);
public:
	modAlphaCipher(const std::wstring& skey);
	std::wstring encrypt(const std::wstring& open_text);
	std::wstring decrypt(const std::wstring& cipher_text);
	modAlphaCipher() = delete;
//	std::wstring numAlpha = L"ABCDEFGHIJKLMNOPQRSTUVWXYZАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
	std::wstring numAlpha = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
	
};