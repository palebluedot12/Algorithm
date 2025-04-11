#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sequence(n);
    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    stack<int> s;
    vector<char> result;
    int current = 1;
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        int target = sequence[i];

        // target보다 작거나 같은 숫자를 스택에 push
        while (current <= target) {
            s.push(current++);
            result.push_back('+');
        }

        // 스택 top이 target이면 pop
        if (!s.empty() && s.top() == target) {
            s.pop();
            result.push_back('-');
        } else {
            // 불가능한 경우
            possible = false;
            break;
        }
    }

    if (possible) {
        for (char c : result) {
            cout << c << '\n';
        }
    } else {
        cout << "NO\n";
    }

    return 0;
}
