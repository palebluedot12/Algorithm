#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    int num[26] = {0, }; // 알파벳 개수
    int max = -1;

    cin >> s;

    // 다 대문자로 바꿔
    for (int i = 0; i < s.length(); i++) {
        if (s[i] > 90) {
            s[i] = s[i] - 32;
        }

        num[s[i]-65]++; // 알파벳 어레이 0~26에 65~90 까지 값을 하나씩 할당
    }

    // num 어레이에서 max값 index + 65 해서 ch에 저장
    int size = (sizeof(num)/sizeof(*num));
    char ch = '?';

    for (int j = 0; j < size; j++){
        if(num[j] > max) {
            max = num[j];
            ch = (char) (j + 65);
        }

        else if (num[j] == max){
            ch = '?';
        }

    }

    cout << ch;


    

	return 0;
}