#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main(){
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] >= 65 && input[i] <= 90) { // 대문자일때 소문자로
			input[i] += 32;
		}
		else { // 소문자일때 대문자로
			input[i] -= 32;
		}
	}

	cout << input;

	return 0;
}

