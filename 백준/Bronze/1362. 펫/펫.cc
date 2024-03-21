#include <iostream>

using namespace std;

int main(void){
    int decent, actual; // 적정 체중과 실제 체중
    int scenario_num = 1; // 시나리오 번호

    while (cin >> decent >> actual && (decent != 0 || actual != 0)) {
        char act;
        int act_num;
        bool isAlive = true; // 펫의 생존 여부

        while (cin >> act >> act_num && !(act == '#' && act_num == 0)) {
            if (!isAlive) continue; // 펫이 죽었다면, 추가 행동을 무시

            if (act == 'F') {
                actual += act_num;
            } else if (act == 'E') {
                actual -= act_num;
            }

            if (actual <= 0) isAlive = false; // 펫의 생존 상태 업데이트
        }

        // 시나리오 결과 출력
        if (!isAlive) {
            cout << scenario_num << " RIP" << endl;
        } else if (actual > decent / 2 && actual < decent * 2) {
            cout << scenario_num << " :-)" << endl;
        } else {
            cout << scenario_num << " :-(" << endl;
        }

        scenario_num++; // 시나리오 번호 증가
    }
}
