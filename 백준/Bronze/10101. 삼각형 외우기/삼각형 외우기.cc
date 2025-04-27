#include <bits/stdc++.h>
using namespace std;

int main()
{
    int one, two, three;

    cin >> one >> two >> three;

    if (one + two + three == 180)
    {
        if (one == 60 && two == 60 && three == 60)
            cout << "Equilateral";
        else if (one == two || two == three || one == three)
            cout << "Isosceles";
        else
            cout << "Scalene";
    }
    else
        cout << "Error";

    return 0;
}
