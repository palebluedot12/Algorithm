#include <string>
#include <vector>

using namespace std;

/* 
1. 각 스테이지별로 (N만큼 for문 돈다.) 실패율을 구한다.
2. 실패율 배열 내림차순으로 sort 한다.
*/


#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> failureRates; // 스테이지 번호와 실패율 저장

    // 각 스테이지에 대해 실패율 계산
    for (int i = 1; i <= N; i++) {
        int total = 0, part = 0;

        for (auto stage : stages) {
            if (stage >= i) total++; // 스테이지 i 이상 도달한 플레이어
            if (stage == i) part++;  // 스테이지 i에서 도전 중인 플레이어
        }

        double failureRate = (total == 0) ? 0.0 : static_cast<double>(part) / total;
        failureRates.emplace_back(i, failureRate); // 실패율 저장
    }

    // 실패율 기준으로 정렬 (내림차순), 실패율 같으면 스테이지 번호 오름차순
    sort(failureRates.begin(), failureRates.end(),
         [](const pair<int, double>& a, const pair<int, double>& b) {
             if (a.second == b.second) return a.first < b.first;
             return a.second > b.second;
         });

    // 정렬된 스테이지 번호 추출
    for (const auto& p : failureRates) {
        answer.push_back(p.first);
    }

    return answer;
}