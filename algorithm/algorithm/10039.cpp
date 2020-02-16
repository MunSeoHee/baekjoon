#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int sum = 0, score;

	for (int i = 0; i < 5; i++) {
		cin >> score;
		if (score < 40) {
			sum += 40;
		}
		else {
			sum += score;
		}
	}
	cout << sum / 5;
	system("PAUSE");


	return 0;
}