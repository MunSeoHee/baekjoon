#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, C;
	cin >> A >> B >> C;

	if (C - B <= 0) {
		cout << -1;
	}
	else {
		cout << -A / (B - C) + 1;
	}
	

	system("PAUSE");


	return 0;
}