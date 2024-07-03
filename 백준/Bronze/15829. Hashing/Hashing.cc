#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int M = 1234567891;
	int r = 31;

	int length;
	int sum = 0;

	cin >> length;
	char* string = new char[length];

	for (size_t i = 0; i < length; i++)
	{
		cin >> string[i];
	}

	for (size_t i = 0; i < length; i++)
	{
		sum += (int(string[i]) - 96) * pow(r,i);
	}

	cout << sum % M;


	
}