#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];

void func(int k, int start)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i <= n; i++)
    {
        arr[k] = i; // 현재 숫자 
        func(k + 1, i + 1); // 다음 단계에서 i 이후 숫자만 선택
    }
}

int main()
{
    cin >> n >> m;
    func(0, 1);
}