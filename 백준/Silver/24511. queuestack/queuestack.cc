#include <bits/stdc++.h>

using namespace std;

// 첫째 줄에 자료구조의 개수 N (10만까지)
// 둘째 줄에 큐(0)랑 스택(1)
// 셋째 줄에 각 자료구조에 들어있는 원소 (10억개까지)
// 넷째 줄에 삽입할 수열의 길이
// 다섯째 줄에 queuestack에 삽입할 원소를 담고 있는 길이 M의 수열 C (10억개까지)

int main(void) 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> d;
	int N, n;
	cin >> N;
	int ds[100001];
	for (int i = 0; i < N; i++) {
		cin >> ds[i];
	}

	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (ds[i] == 0) {
			d.push_back(a);
		}
		//stack일 때(1일때)는 LIFO이기 때문에 새로 들어온게 바로 pop 된다.
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		d.push_front(a);
		cout << d.back() << " ";
		d.pop_back();
	}
}