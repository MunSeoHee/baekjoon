#include<iostream>
#include <stack>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	stack <int> st;
	int n,num;
	string s;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> s;

		switch (s[1])
		{
		case 'u':
			cin >> n;
			st.push(n);
			break;
		case 'o':
			if (s[0] == 't') {
				if (st.empty()) {
					cout << -1 << '\n';
				}
				else {
					cout << st.top() << '\n';
				}
			}
			else {
				if (!st.empty()) {
					cout << st.top() << '\n';
					st.pop();
				}
				else {
					cout << -1 << '\n';
				}
			}
			break;
		case 'i':
			cout << st.size() << '\n';
			break;
		case 'm':
			if (st.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
			break;
		}
	}
	system("PAUSE");


	return 0;
}