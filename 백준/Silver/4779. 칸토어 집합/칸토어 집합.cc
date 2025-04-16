#include <bits/stdc++.h>
using namespace std;

string kantor(int n)
{
	if (n == 0) return "-";
	string result = kantor(n - 1);
	string blank(result.size(), ' ');
	return result + blank + result;
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << kantor(n) << '\n';
	}
}
