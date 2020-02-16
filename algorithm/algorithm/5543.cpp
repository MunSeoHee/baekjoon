#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int b, d;
	int min_b = 9999, min_d = 9999;
	for (int i = 0; i < 3; i++) {
		cin >> b;
		if (b < min_b) {
			min_b = b;
		}
	}
	for (int i = 0; i < 2; i++) {
		cin >> d;
		if (d < min_d) {
			min_d = d;
		}
	}
	cout << min_d + min_b - 50;
	system("PAUSE");


	return 0;
}