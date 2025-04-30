#include <bits/stdc++.h>
using namespace std;

int arr[1005];

int main() 
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n, greater<int>()); 

    cout << arr[k - 1];
    return 0;
}
