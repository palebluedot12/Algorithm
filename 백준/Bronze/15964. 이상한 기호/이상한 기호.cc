#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

long long at(long long, long long);

int main(){
	long long a, b;
	cin >> a >> b;
	cout << at(a, b);

	return 0;
}

long long at(long long a, long long b) {
	return (a + b) * (a - b);
}