/*
단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지.
일단 input에서 단어를 찾고,
없으면 break
있으면 해당 단어를 1로 replace (nnjj 같은거 nj 삭제하면 2개로 인식되니 삭제는 x)
하고 바뀐 string size 반환하면 끗.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> alphas = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	string input;
	cin >> input;
	int cnt;
	int pos = 0;
	
	for (string alpha : alphas)
	{
		while (true)
		{
			int pos = input.find(alpha);
			if (pos == -1) break;
			input.replace(pos, alpha.size(), "1");
		}
	}
	cout << input.size();
}
