#include<iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, count=0;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		stack<int> s;
		for (int i = 0; i < str.size(); i++) {
			if (s.empty()) {
				s.push(str[i]);
			}
			else if (s.top() == str[i]) {
				s.pop();
			}
			else {
				s.push(str[i]);
			}
		}
		if (s.empty()) {
			count++;
		}

	}
	cout << count;

	system("PAUSE");


	return 0;
}