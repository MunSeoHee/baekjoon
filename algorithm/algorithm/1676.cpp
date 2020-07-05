#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, five = 0, two = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int temp = i;
		while (!(temp%5)) {
			five++;
			temp = temp/ 5;
		}
		while (!(temp % 2)) {
			two++;
			temp = temp / 2;
		}
	}
	if (two < five) {
		cout << two;
	}
	else {
		cout << five;
	}

	system("PAUSE");


	return 0;
}