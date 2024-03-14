#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;

	int sum;
	int nums;
	int min = 101; // 입력으로 주어지는 자연수가 1~100 이므로 처음에 들어오는 짝수가 바로 들어오도록

	for (int k = 0; k < N; k++)
	{
		for (int i = 0; i < 7; i++){
			cin >> nums;
			
			if (nums % 2 == 0) { // 짝수이면
				sum += nums;
				if (nums <= min) { 
					min = nums;
				}
			}
		}
		cout << sum << " " << min << '\n';
		sum = 0;
		min = 101; // 테스트케이스 하나 돌면 sum이랑 min 다시 초기화
	}

	return 0;
}
