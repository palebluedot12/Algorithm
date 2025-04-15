#include <bits/stdc++.h>

using namespace std;

// 수빈이와 동생의 위치가 주어졌을 때, 수빈이가 동생을 찾을 수 있는 가장 빠른 시간
int dist[100001]; // 방문 여부 + 해당 위치까지 걸린 시간 저장

int main()
{
    int n, k;
    cin >> n >> k;

    queue<int> q;
    q.push(n);
    dist[n] = 0;

    while (!q.empty()) 
    {
        int cur = q.front(); q.pop();

        if (cur == k) 
        {
            cout << dist[cur] << '\n'; // 목적지 도착하면 시간 출력
            return 0;
        }

        for (int next : {cur - 1, cur + 1, cur * 2}) 
        {
            if (next < 0 || next > 100000) continue;
            if (dist[next] != 0 || next == n) continue; // 이미 방문했거나 시작점이면 skip

            dist[next] = dist[cur] + 1;
            q.push(next);
        }
    }
}