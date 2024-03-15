#include <iostream>

using namespace std;

int main(void){

    int len = 3;
    int arr[len];
    int temp;

    for (int i = 0; i < len; i++){ // arr 입력받고
        cin >> arr[i];
    }

    for (int i = 0; i < len - 1; i++){
        for (int j = i + 1; j < len; j++){ 
            if (arr[i] > arr[j]) { // 교환
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++){ // 출력
        cout << arr[i] << ' ';
    }
}