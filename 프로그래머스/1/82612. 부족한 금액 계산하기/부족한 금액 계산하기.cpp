using namespace std;

long long solution(int price, int money, int count)
{
    // 등차수열의 합
    long long total_cost = (long long)price * count * (count + 1) / 2;
    
    long long answer = total_cost - money;
    
    return answer > 0 ? answer : 0;
}