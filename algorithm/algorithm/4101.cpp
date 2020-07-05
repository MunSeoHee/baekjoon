#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;

	while (true) {
		cin >> x >> y;
		if (x == 0 && y == 0) {
			break;
		}
		else if (x > y) {
			cout << "Yes\n";
		}
		else if (x <= y) {
			cout << "No\n";
		}

	}

	system("PAUSE");


	return 0;
}