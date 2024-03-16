#include <iostream>

using namespace std;

int main(void){
	int alphabet[26] = {0, };

	// 소문자 ASCII코드 97 ~ 112
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++){
		alphabet[(int)str[i] - 97]++;
	}

	for (int i = 0; i < 26; i++){
		cout << alphabet[i] << ' ';
	}
}
