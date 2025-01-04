#include "bits/stdc++.h"

using namespace std;

int N, M;
int a[1000000], b[1000000], c[2000000];

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = 0; i < M; i++) cin >> b[i];

	/*
	aidx == N 인지만 확인하고 bidx == M인 경우를 고려하지 않으면
	b[M] 이라는 잘못된 값을 참조할 수 있다.
	*/
	int aidx = 0, bidx = 0;
	for (int i = 0; i < N + M; i++)
	{
		if (bidx == M) c[i] = a[aidx++];
		else if (aidx == N) c[i] = b[bidx++];
		else if (a[aidx] <= b[bidx]) c[i] = a[aidx++];
		else c[i] = b[bidx++];
	}

	for (int i = 0; i < N + M; i++) cout << c[i] << ' ';
}

