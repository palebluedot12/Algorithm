#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	int res = 1;

	getline(cin, s);

	if (s.length() == 1 && s[0] == ' ') { // 공백만 들어오는 경우
		cout << 0;
		return 0;
	}

	for (int i = 1; i < s.length() - 1; i++) { // 첫번째와 마지막 공백 제하고, 공백 개수 + 1 == 단어 개수
		if (s[i] == ' ') res++;
	}

	cout << res;

	return 0;

    
}