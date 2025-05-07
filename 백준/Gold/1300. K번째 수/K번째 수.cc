#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll N, k;
    cin >> N >> k;
    
    ll left = 1;
    ll right = N * N;
    ll answer = 0;
    
    while (left <= right) 
    {
        ll mid = (left + right) / 2;
        ll count = 0; // mid보다 작거나 같은 수의 개수
        
        for (int i = 1; i <= N; i++) 
        {
            count += min(mid / i, N);  // i번째 행에서 mid보다 작거나 같은 수의 개수는 min(mid/i, N)
        }
        
        if (count < k) 
        {
            left = mid + 1;
        } 
        else 
        {
            answer = mid;
            right = mid - 1;
        }
    }
    
    cout << answer << "\n";
    return 0;
}