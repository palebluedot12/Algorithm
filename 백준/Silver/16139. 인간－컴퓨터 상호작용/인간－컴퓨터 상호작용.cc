#include <iostream>
#include <string>
using namespace std;

int prefix[26][200001]; // i 번째 알파벳의 j번까지 누적 등장 횟수

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; ++i) 
    {
        int c = s[i] - 'a';
        for (int j = 0; j < 26; ++j) 
        {
            prefix[j][i + 1] = prefix[j][i]; // 이전까지 값 복사
        }
        prefix[c][i + 1]++; // 해당 문자
    }

    int q;
    cin >> q;

    while (q--) {
        char ch;
        int l, r;
        cin >> ch >> l >> r;
        int c = ch - 'a';
        cout << prefix[c][r + 1] - prefix[c][l] << '\n';
    }

    return 0;
}
