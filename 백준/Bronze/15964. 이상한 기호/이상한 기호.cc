#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int at(int, int);

int main(){
	int a, b;
	int result;
	cin >> a >> b;
	cout << at(a, b);

	return 0;
}

int at(int a, int b) {
	return (a + b) * (a - b);
}