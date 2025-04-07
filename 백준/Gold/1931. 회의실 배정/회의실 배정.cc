#include <bits/stdc++.h>
using namespace std;

pair<int, int> s[100005]; // (end time, start time)
int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) cin >> s[i].second >> s[i].first;
	sort(s, s + n);

	int cnt = 0;
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		if (t > s[i].second) continue; // t = 커서
		cnt++;
		t = s[i].first;
	}
	cout << cnt;
}