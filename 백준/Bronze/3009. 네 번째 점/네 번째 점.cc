#include <iostream>
#include <algorithm>

using namespace std;

// 세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

int main(void){
    
    // x좌표 같은거 두 개, y좌표 같은거 두 개가 있어야 함. 그 미만도 초과도 안됨.

    int x[4], y[4];

    for (int i = 0; i < 3; i++){
        cin >> x[i] >> y[i];
    }

    if (x[0] == x[1]) x[3] = x[2];
    else if (x[0] == x[2]) x[3] = x[1];
    else x[3] = x[0];

    if (y[0] == y[1]) y[3] = y[2];
    else if (y[0] == y[2]) y[3] = y[1];
    else y[3] = y[0];

    cout << x[3] << ' ' << y[3];

}