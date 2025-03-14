#include <bits/stdc++.h>
using namespace std;

int n, k;
long long sum;

pair<int, int> jewel [300005]; // 보석 가격, 무게
multiset<int> bag;			   // 가방 최대 무게

int main()
{
	
	cin >> n >> k; // 각 30만까지

	// 보석 (무게, 가격)
	for (int i = 0; i < n; i++)
	{
		cin >> jewel[i].second >> jewel[i].first;
	}

	// 가격순 정렬 (first 기준)
	sort(jewel, jewel + n);

	// 가방 최대 무게
	for (int i = 0; i < k; i++)
	{
		int max_weight;
		cin >> max_weight;
		bag.insert(max_weight);
	}

	for (int i = n - 1; i >= 0; i--)
	{
		int m, v;
		tie(v, m) = jewel[i];
		auto it = bag.lower_bound(m);
		if (it == bag.end()) continue;
		sum += v;
		bag.erase(it);
	}
	cout << sum;
}