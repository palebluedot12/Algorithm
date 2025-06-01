#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> answer(N, -1);
    stack<int> s; // 인덱스를 저장하는 스택

    for (int i = 0; i < N; ++i) 
    {
        cin >> A[i];
        
        // 현재 수가 스택 top보다 크면 오큰수 발견
        while (!s.empty() && A[i] > A[s.top()]) 
        {
            answer[s.top()] = A[i];
            s.pop();
        }
        s.push(i); // 오큰수를 아직 못 찾은 인덱스!!
    }

    for (int i = 0; i < N; ++i)
        cout << answer[i] << " ";
    return 0;
}