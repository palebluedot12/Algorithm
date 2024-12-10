#include <bits/stdc++.h>

using namespace std;

/*
1. 여는 괄호가 나오면 스택에 쌓는다.
2. 닫는게 나오면
	- 스택이 비어있으면 틀린 괄호쌍
	- top에 있는 애랑 다른 괄호쌍이면 틀린 괄호쌍
	- top에 있는 애랑 같으면 pop
3. 문자열 루프를 다 돌았는데 스택이 비어있으면 맞는 괄호쌍, 아니면 틀린 괄호쌍.
4. 문자열이 "." 이면 종료
*/

int main()
{
	

	while (true)
	{
		stack<char> st;
		string s;
		getline(cin, s);
		if (s == ".") break;
		bool isvalid = true;

		for (char a : s)
		{
			if (a == '(' || a == '[') st.push(a);
			
			else if(a == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					//cout << "no\n";
					isvalid = false;
					break;
				}
				else { st.pop(); }
			}
			else if (a == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					//cout << "no\n";
					isvalid = false;
					break;
				}
				else { st.pop(); }
			}

		}

		if (!st.empty()) isvalid = false;
		if (isvalid) cout << "yes\n";
		else { cout << "no\n"; }
	}

}