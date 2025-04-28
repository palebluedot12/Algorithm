#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) 
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0)
            break;

        int sides[3] = { a, b, c };
        sort(sides, sides + 3); // 정렬!!! 해서 가장 긴 변을 마지막으로

        if (sides[2] >= sides[0] + sides[1]) 
        {
            cout << "Invalid" << endl;
        }
        else 
        {
            if (sides[0] == sides[1] && sides[1] == sides[2])
                cout << "Equilateral" << endl;
            else if (sides[0] == sides[1] || sides[1] == sides[2] || sides[0] == sides[2])
                cout << "Isosceles" << endl;
            else
                cout << "Scalene" << endl;
        }
    }
    return 0;
}
