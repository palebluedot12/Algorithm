#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

int recursion(const char* s, int l, int r) 
{
    cnt++;
    if (l >= r) return 1; 
    else if (s[l] != s[r]) return 0; // 팰린드롬이 아니다
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) 
{
    cnt = 0;
    return recursion(s, 0, strlen(s) - 1);
}

int main() 
{
    int T;
    cin >> T;
    while (T--)
    {
        char input [1001];
        cin >> input;

        int result = isPalindrome(input);
        cout << result << ' ' << cnt << '\n';
    }

}