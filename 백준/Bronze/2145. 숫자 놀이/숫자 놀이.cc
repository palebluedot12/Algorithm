#include <iostream>

using namespace std;

int main(void) {
    
    int input = 0;

    while (true){
        cin >> input;
        
        if (input == 0) break;

        // 숫자가 한 자리가 될 때까지 반복
        while (input >= 10){
            int sum = 0;
            // 현재 input의 각 자리 수를 더하는 과정
            while (input != 0){
                sum += input % 10;
                input /= 10;
            }
            // sum을 새로운 input으로 설정하여 과정 반복
            input = sum;
        }

        cout << input << endl;
    }

    return 0;
}
