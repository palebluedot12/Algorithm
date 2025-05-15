#include <bits/stdc++.h>

using namespace std;

int divi[1000005]; // 약수들 모음집

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) cin >> divi[i];

	int minDiv = *min_element(divi, divi + n);
	int maxDiv = *max_element(divi, divi + n);

	cout << minDiv * maxDiv << '\n';
	
	return 0;
}