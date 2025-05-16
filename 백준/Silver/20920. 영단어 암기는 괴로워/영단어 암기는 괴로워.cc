#include <bits/stdc++.h>

using namespace std;

// 1. 빈도 2. 길이 3. 사전순
bool compare(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second != b.second) return a.second > b.second;
	if (a.first.length() != b.first.length()) return a.first.length() > b.first.length();
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	
	map<string, int> freq;

	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;
		if (word.length() >= m) freq[word]++;
	}

	vector<pair<string, int>> words(freq.begin(), freq.end());
	sort(words.begin(), words.end(), compare);

	for (auto& [w, _] : words)
		cout << w << '\n';
}