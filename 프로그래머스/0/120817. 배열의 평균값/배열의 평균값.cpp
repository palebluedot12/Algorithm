#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int quantity = 0;
    int sum = 0;
    
    for (int nums : numbers)
    {
        sum += nums;
        quantity++;
    }
    
    answer = (double)sum / quantity;
    
    return answer;
}