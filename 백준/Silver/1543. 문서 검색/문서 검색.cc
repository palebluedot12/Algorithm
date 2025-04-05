#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input, tofind;

	getline(cin, input);
	getline(cin, tofind);

	int pos = 0;
	int cnt = 0;

	// pos가 input size보다 커질때까지 돌아 => 아예 없을수도 있음.
	// npos가 아닐때까지 돌아 => 걍 cnt 반환하면 끝임
	
	int f = input.find(tofind);
	while (f != string::npos)
	{
		cnt++;
		f = input.find(tofind, f + tofind.size());
	}
	cout << cnt;
}