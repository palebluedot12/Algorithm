#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int sides[3];
    int sum = 0;
    cin >> sides[0] >> sides[1] >> sides[2];

    sort(sides, sides + 3);

    if (sides[2] < sides[0] + sides[1])
    {
        for (int i = 0; i < 3; i++) sum += sides[i];
    }

    else
    {
        while (sides[2]-- >= sides[0] + sides[1])
        {
            sum = sides[0] + sides[1] + sides[2];
        }
    }

    cout << sum;
    
    return 0;
}
