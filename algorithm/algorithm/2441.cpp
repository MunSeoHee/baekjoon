#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++) {
			cout << ' ';
		}
		for (int j = i; j < num; j++) {
			cout << '*';
		}
		cout << '\n';
	}

	system("PAUSE");


	return 0;
}