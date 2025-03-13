#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

void sync(priority_queue<int>& maxHeap, unordered_map<int, int>& count) {
    while (!maxHeap.empty() && count[maxHeap.top()] == 0)
        maxHeap.pop();
}

void sync(priority_queue<int, vector<int>, greater<int>>& minHeap, unordered_map<int, int>& count) {
    while (!minHeap.empty() && count[minHeap.top()] == 0)
        minHeap.pop();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;

    while (T--) {
        int k;
        cin >> k;

        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_map<int, int> count;

        for (int i = 0; i < k; i++) {
            char op;
            int num;
            cin >> op >> num;

            if (op == 'I') { 
                maxHeap.push(num);
                minHeap.push(num);
                count[num]++;
            } else if (op == 'D') {
                if (num == 1) { // 최대값 삭제
                    sync(maxHeap, count);
                    if (!maxHeap.empty()) {
                        count[maxHeap.top()]--;
                        maxHeap.pop();
                    }
                } else { // 최솟값 삭제
                    sync(minHeap, count);
                    if (!minHeap.empty()) {
                        count[minHeap.top()]--;
                        minHeap.pop();
                    }
                }
            }
        }

        // 최종 정리 (동기화)
        sync(maxHeap, count);
        sync(minHeap, count);

        if (maxHeap.empty()) {
            cout << "EMPTY\n";
        } else {
            cout << maxHeap.top() << " " << minHeap.top() << '\n';
        }
    }
    return 0;
}
