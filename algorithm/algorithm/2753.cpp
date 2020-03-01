#include<iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int y;

	cin >> y;
	if (y % 4 == 0 && y%100!=0) {
		cout << 1;
	}
	else if (y % 400 == 0) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	system("PAUSE");


	return 0;
}