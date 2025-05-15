#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;


// ChongChong과 만나면 무지개 댄스
// 댄스 추고있는 총 인원은?
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    unordered_set<string> dancers;
    dancers.insert("ChongChong");

    while (n--)
    {
        string a, b;
        cin >> a >> b;

        // 둘 중 하나라도 춤추고 있으면 둘 다 춤추게
        if (dancers.count(a) || dancers.count(b)) 
        {
            dancers.insert(a);
            dancers.insert(b);
        }
    }

    cout << dancers.size() << '\n';
}