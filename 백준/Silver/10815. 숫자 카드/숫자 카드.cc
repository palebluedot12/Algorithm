#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, num;
    unordered_set<int> cards;

    cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        cin >> num;
        cards.insert(num);
    }

    cin >> M;
    for (int i = 0; i < M; ++i) 
    {
        cin >> num;
        cout << (cards.count(num) ? 1 : 0) << ' ';
    }

    return 0;
}