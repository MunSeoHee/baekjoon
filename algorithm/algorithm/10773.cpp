#include<iostream>
#include <stack>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> s;
	int num,n,sum=0;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		if (n == 0) {
			s.pop();
		}
		else {
			s.push(n);
		}
	}

	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}
	cout << sum;

	system("PAUSE");


	return 0;
}