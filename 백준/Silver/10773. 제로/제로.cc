#include <bits/stdc++.h>

using namespace std;

int main()
{
	// 잘못된 수를 부를 때마다 0을 외쳐서, 가장 최근에 재민이가 쓴 수를 지우게 시킨다.
	// 재민이는 이렇게 모든 수를 받아 적은 후 그 수의 합을 알고 싶어 한다.

	/* 첫 번째 줄에 정수 k가 주어진다
	이후 k의 줄에 정수가 1개씩 주어진다. (0~100만)
	정수가 0일 경우에 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다
	0일 경우에 지울 수 있는 수가 있음을 보장할 수 있다.
	*/ 

	stack<int> st;
	int sum = 0;
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int num;
		cin >> num;
		sum += num;
		if (num == 0)
		{
			sum -= st.top();
			st.pop();
		}
		else st.push(num);
	}

	cout << sum;
}