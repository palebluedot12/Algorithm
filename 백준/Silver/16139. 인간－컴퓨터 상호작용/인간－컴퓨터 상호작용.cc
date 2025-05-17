#include <bits/stdc++.h>
using namespace std;

// 문자열 구간에 해당 알파벳이 몇 번 등장하는가?

int main()
{
	string input; // input 길이는 2000자 이하
	int q; // q는 20만까지
	cin >> input;
	cin >> q;

	while (q--)
	{
		int l, r;
		char alpha;
		int result = 0;
		cin >> alpha >> l >> r;

		for (int i = l; i <= r; i++)
		{
			if (alpha == input[i]) result++;
		}
		cout << result << '\n';
	}
}