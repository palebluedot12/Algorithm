#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    queue<int> now;
    stack<int> waiting;
    int index = 1;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        now.push(input);
    }

    while (!now.empty() || !waiting.empty()) {
        // waiting에 있는 친구가 먼저 받을 수 있다면 계속 pop
        while (!waiting.empty() && waiting.top() == index) {
            waiting.pop();
            index++;
        }

        // now의 front가 index라면 처리
        if (!now.empty() && now.front() == index) {
            now.pop();
            index++;
        }
        // 아니라면 스택에 넣음
        else if (!now.empty()) {
            waiting.push(now.front());
            now.pop();
        }
        // now도 empty고 waiting도 index가 안 맞는 경우 종료
        else {
            break;
        }
    }

    if (waiting.empty()) cout << "Nice\n";
    else cout << "Sad\n";
}
