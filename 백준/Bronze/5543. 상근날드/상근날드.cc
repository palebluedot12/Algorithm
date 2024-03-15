#include <iostream>

using namespace std;

int main(void){
    int burger[3];
    int beverage[2];
    int bur_min = 2001;
    int bev_min = 2001;

    for (int i = 0; i < 3; i++){
        cin >> burger[i];
        if (burger[i] <= bur_min){
            bur_min = burger[i];
        }
    }

    for (int k = 0; k < 2; k++){
        cin >> beverage[k];
        if (beverage[k] <= bev_min){
            bev_min = beverage[k];
        }
    }

    cout << bur_min + bev_min - 50;

    
}