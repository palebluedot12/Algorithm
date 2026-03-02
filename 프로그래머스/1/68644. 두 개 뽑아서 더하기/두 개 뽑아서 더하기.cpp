#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sum_set;

    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            sum_set.insert(numbers[i] + numbers[j]);
        }
    }

    vector<int> answer(sum_set.begin(), sum_set.end());
    
    return answer;
}