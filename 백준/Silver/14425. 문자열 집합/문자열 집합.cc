#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

unordered_set<string> s;

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
	{
		string str;
		cin >> str;
		s.insert(str);
	}

	int cnt = 0;
	while (m--)
	{
		string query;
		cin >> query;
		cnt += s.count(query);
	}

	cout << cnt;

}