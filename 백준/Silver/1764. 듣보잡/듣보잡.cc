#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    unordered_set<string> unheard;
    vector<string> result;

    string name;
    for (int i = 0; i < n; ++i) 
    {
        cin >> name;
        unheard.insert(name);
    }

    for (int i = 0; i < m; ++i) 
    {
        cin >> name;
        if (unheard.find(name) != unheard.end()) 
        {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (const auto& n : result) 
    {
        cout << n << '\n';
    }

    return 0;
}
