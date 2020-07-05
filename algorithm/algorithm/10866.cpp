#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;

	deque<int> de;
	int num,x;
	cin >> num;
	while (num--) {
		cin >> str;
		switch (str[1])
		{
		case 'u':
			cin >> x;
			if (str[5] == 'f') {
				de.push_front(x);
			}
			else {
				de.push_back(x);
			}
			break;
		case 'o':
			if (de.empty()) {
				cout << -1 << '\n';
			}
			else {
				if (str[4] == 'f') {
					cout << de.front() << '\n';
					de.pop_front();
				}
				else {
					cout << de.back() << '\n';
					de.pop_back();
				}
			}
			break;
		case 'i':
			cout << de.size() << '\n';
			break;
		case 'm':
			if (de.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
			break;
		case 'r':
			if (de.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << de.front() << '\n';
			}
			break;
		case 'a':
			if (de.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << de.back() << '\n';
			}
			break;

		default:
			break;
		}
	}

	system("PAUSE");


	return 0;
}