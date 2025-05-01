#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    set<int> A, B;
    int x;

    for (int i = 0; i < n; ++i) 
    {
        cin >> x;
        A.insert(x);
    }

    for (int i = 0; i < m; ++i) 
    {
        cin >> x;
        B.insert(x);
    }
    
    // 교집합 구해서 빼기
    vector<int> intersection;
    set_intersection(
        A.begin(), A.end(),
        B.begin(), B.end(),
        back_inserter(intersection)
    );

    int answer = A.size() + B.size() - 2 * intersection.size();
    cout << answer << '\n';
}
