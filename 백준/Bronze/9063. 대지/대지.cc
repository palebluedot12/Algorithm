#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minX = INT_MAX, maxX = INT_MIN;
    int minY = INT_MAX, maxY = INT_MIN;

    for (int i = 0; i < n; i++) 
    {
        int x, y;
        cin >> x >> y;

        minX = min(minX, x);
        maxX = max(maxX, x);
        minY = min(minY, y);
        maxY = max(maxY, y);
    }

    int width = maxX - minX;
    int height = maxY - minY;
    int area = width * height;

    cout << area << endl;

    return 0;
}