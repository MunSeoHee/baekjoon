#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool test = true;

int main()
{
	stack<char> input;
	char temp;
	string a;//임시
	getline(cin, a);

	string stop = { '.' };//while에 사용됨
	while (a != stop)
	{
		test = true;

		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == '(')
				input.push('(');

			else if (a[i] == '[')
				input.push('[');
			else if (a[i] == '[')
				input.push('[');
			else if (a[i] == ']')
			{
				if (!input.empty() && input.top() == '[')
					input.pop();
				else
				{
					test = false;
					break;
				}
			}
			else if (a[i] == ')')
			{
				if (!input.empty() && input.top() == '(')
					input.pop();
				else
				{
					test = false;
					break;
				}
			}

		}
		if (test == true && input.empty())
		{
			cout << "yes" << endl;

		}
		else
		{
			cout << "no" << endl;

		}
		a.clear();
		getline(cin, a);
	}


}