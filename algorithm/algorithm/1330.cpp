#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << ">" << '\n';
	}
	else if (a == b) {
		cout << "==" << '\n';
	}
	else {
		cout << "<" << '\n';
	}
	system("PAUSE");


	return 0;
}