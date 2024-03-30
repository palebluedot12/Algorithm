/*시험장마다 총감독관 1명은 무조건. 그리고 최대 1명.
부감독관은 없을 수도 있고, 여러명 가능*/

#include <iostream>
#include <cmath>
using namespace std;

int applicants[1000000]; // 각 시험장 별 응시자 수. *main안에 넣으면 exception남

int main(void){

    int room = 0; // 시험장 개수
    int able_main, able_sub = 0; // 총감독관이 감시할 수 있는 수, 부감독관이 감시할 수 있는 수
    long long sum = 0;

    cin >> room;
    for (int i = 0; i < room; i++){
        cin >> applicants[i];
    }
    cin >> able_main >> able_sub;

    for (int i = 0; i < room; i++){
        if(applicants[i] - able_main <= 0)
        {
            sum++;
            continue;
        }

        else // 해당 방의 응시자가 총감독관 가능한 수보다 많을 경우
        {
            if (((applicants[i] - able_main) / able_sub ) < 1) // 부감독관이 1명만 필요한 경우
                sum += 2;

            else
            {
                sum += 1;
                sum += ceil((double)(applicants[i] - able_main) / able_sub);
            }
        }
    }

    cout << sum;
}