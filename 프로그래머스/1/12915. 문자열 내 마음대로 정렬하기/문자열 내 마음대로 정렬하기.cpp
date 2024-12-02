#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Compare 클래스를 사용하여 n을 전달
class Compare {
public:
    int n; 

    Compare(int index) : n(index) {}  // 생성자에서 n을 초기화

    bool operator()(const string& a, const string& b) const 
    {
        if (a[n] != b[n]) return a[n] < b[n];
        return a < b;
    }
};

bool compare(const string& a, const string& b)
{
    int n = 1;
    if (a[n] != b[n]) return a[n] < b[n];
    return a < b;
}
vector<string> solution(vector<string> strings, int n) {
    Compare compare(n);
    sort(strings.begin(), strings.end(), compare);
    return strings;
}