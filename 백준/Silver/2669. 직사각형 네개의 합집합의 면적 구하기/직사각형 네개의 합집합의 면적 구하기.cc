#include <iostream>
using namespace std;

int main() {
    bool plane[100][100] = {false};
    int x1, y1, x2, y2; 
    int area = 0; // 면적 저장

    for (int i = 0; i < 4; i++) { 
        cin >> x1 >> y1 >> x2 >> y2; 
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                plane[x][y] = true;
            }
        }
    }

    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            if (plane[x][y]) area++;
        }
    }

    cout << area;

    return 0;
}