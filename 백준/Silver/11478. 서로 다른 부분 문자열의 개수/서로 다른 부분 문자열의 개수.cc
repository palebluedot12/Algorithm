#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() 
{
    string s;
    cin >> s;

    set<string> substrings;

    for (int i = 0; i < s.size(); ++i) 
    {
        string temp = "";
        for (int j = i; j < s.size(); ++j) 
        {
            temp += s[j];
            substrings.insert(temp);
        }
    }

    cout << substrings.size() << '\n';
    return 0;
}
