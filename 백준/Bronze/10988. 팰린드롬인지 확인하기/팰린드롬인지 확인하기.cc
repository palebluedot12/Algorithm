#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string str;

	cin >> str;
	string reversed = str;
	reverse(reversed.begin(), reversed.end());

	if(str == reversed)
		cout << "1";
	else
		cout << 0;
	return 0;
}