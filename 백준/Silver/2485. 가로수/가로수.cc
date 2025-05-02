#include <bits/stdc++.h>
using namespace std;

int trees[100005];

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main()
{
	// 심어진 가로수들이 주어지면,
	// 모든 가로수가 같은 간격이 되도록 새로 심어야 하는 가로수의 최소수 출력
	// 가로수의 위치는 10억까지, 가로수의 개수 3 <= n <= 10만

	// 차들을 저장한다
	// 차들의 최대공약수를 구한다
	// 간격 / 최대공약수 = 총 나무 수!!

	int n; // 이미 심어져 있는 가로수의 수
	cin >> n; 

	vector<int> diffs;

	for (int i = 0; i < n; i++)
	{
		cin >> trees[i];
		if (i >= 1) diffs.push_back(trees[i] - trees[i - 1]);
	}

	// 차들의 최대공약수를 구한다
	int d = diffs[0];
	for (int i = 1; i < diffs.size(); ++i) 
	{
		d = gcd(d, diffs[i]);
	}

	// 총 나무 수 = 간격 / GCD + 1
	// 추가로 심어야 될 나무 = 총 나무 - 기존 나무
	int total_trees = (trees[n - 1] - trees[0]) / d + 1;
	int answer = total_trees - n;
	cout << answer << '\n';

}