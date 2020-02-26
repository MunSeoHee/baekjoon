#include<iostream>
#include <stack>
#include <string>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	stack <char> st1;

	while (1) {
		getline(cin, s);
		if (s == ".") {
			break;
		}
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '[') {
				st1.push(s[i]);
			}
			else if (s[i] == '(') {
				st1.push(s[i]);
			}
			else if (s[i] == ']') {
				if (st1.empty()) {
					cout << "no\n";
					break;
				}
				else if(st1.top() == '[') {
					st1.pop();
				}
				else {
					cout << "no\n";
					break;
				}
			}
			else if (s[i] == ')') {
				if (st1.empty()) {
					cout << "no\n";
					break;
				}
				else if(st1.top() == '(') {
					st1.pop();
				}
				else {
					cout << "no\n";
					break;
				}
			}
			if ( i ==(s.length() -1) && st1.empty()) {
				cout << "yes\n";
			}
			else if (i == (s.length() - 1) && !st1.empty()) {
				cout << "no\n";
			}
		}
		
		while (!st1.empty()) st1.pop();
	}
	
	system("PAUSE");


	return 0;
}