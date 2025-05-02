#include <iostream>
#include <cmath>

using namespace std;

long find_Prime(long temp) {

	if (temp == 0 || temp == 1) return 2;

	bool isPrime;
	do {
		isPrime = true; //현재 temp값이 소수라고 가정
		for (int i = 2; i <= sqrt(temp); i++) {
			if (temp % i == 0) {
				isPrime = false;
				break;
			}
		}
		temp++;
	} while (isPrime==false);

	return temp - 1;
}

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long temp;
		cin >> temp;

		cout << find_Prime(temp) << endl;
	}
}