#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num-i-1; j++) {
			cout << ' ';
		}
		for (int j = num-i-1; j < num; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	system("PAUSE");


	return 0;
}