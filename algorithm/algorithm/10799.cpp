#include<iostream>
#include <stack>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	stack<char> s;
	char temp;
	int count=0, sum = 0;
	string str;
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		switch (str[i])
		{
		case '(':
			count++;
			break;
		case')':
			if (str[i - 1] == '(') {
				count--;
				sum += count;
			}
			else {
				sum++;
				count--;
			}
			break;
		default:
			break;
		}
	}
	cout << sum;
	system("PAUSE");


	return 0;
}