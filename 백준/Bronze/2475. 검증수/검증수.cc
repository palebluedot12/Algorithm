#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int geomzeungsu(int a, int b, int c, int d, int e);

int main(){
	int a, b, c, d, e;
	int result;
	cin >> a >> b >> c >> d >> e;
	result = geomzeungsu(a, b, c, d, e);
	cout << result;

	return 0;
}

int geomzeungsu(int a, int b, int c, int d, int e) {
	int result = ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;
	return result;
}