#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<string> names; // 바꾼 부분
    int n, count = 0;
    cin >> n;

    while (n--)
    {
        string input;
        cin >> input;

        if (input == "ENTER") {
            names.clear();
        }
        else {
            if (names.find(input) == names.end()) {
                names.insert(input);
                count++;
            }
        }
    }

    cout << count << '\n';
    return 0;
}
