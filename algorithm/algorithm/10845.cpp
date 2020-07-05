#include<iostream>
#include <queue>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int> q;
	int n;
	string str;
	int x;
	cin >> n;
	while (n--) {
		cin >> str;
		switch (str[1])
		{
		case 'u':
			cin >> x;
			q.push(x);
			break;
		case 'o':
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
			break;
		case 'i':
			cout << q.size() << '\n';
			break;
		case 'm':
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
			break;
		case 'r':
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
			break;

		case 'a':
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
			break;
			
		default:
			break;
		}
	}
	system("PAUSE");


	return 0;
}