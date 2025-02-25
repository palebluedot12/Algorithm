#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
	int gaesu;
	cin >> gaesu;
	stack<int> st;

	for (int i = 0; i < gaesu; i++)
	{
		int input;
		cin >> input;

		switch (input)
		{
		case 1:
		{
			int num;
			cin >> num;
			st.push(num);
			break;
		}
		case 2:
			if (!st.empty())
			{
				cout << st.top() << "\n";
				st.pop();
				break;
			}
			else
			{
				cout << -1 << "\n";
				break;
			}
		case 3:
			
			cout << st.size() << "\n";
			break;
			
		case 4:
			if (st.empty()) { cout << 1 << "\n"; break; }
			else { cout << 0 << "\n"; break; }
		case 5:
			if (!st.empty()) { cout << st.top() << "\n"; break; }
			else { cout << -1 << "\n"; break; }
		default:
			break;



		}
	}

		
}