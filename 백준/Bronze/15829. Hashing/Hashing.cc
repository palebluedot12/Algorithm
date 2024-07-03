#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long M = 1234567891;
	long long r = 1;

	int length;
	unsigned long long sum = 0;

	cin >> length;
	char* string = new char[length];

	for (size_t i = 0; i < length; i++)
	{
		cin >> string[i];
	}

	// sum 이 너무 큰 탓...
	for (size_t i = 0; i < length; i++)
	{
		sum += ((int(string[i]) - 96) * r) % M;
		r = (r * 31) % M;
	}

	cout << sum % M;


	
}