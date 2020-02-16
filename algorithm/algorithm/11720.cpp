#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string num;
	int sum = 0;
	int n;
	cin >> n >> num;
	for (int i = 0; i < n; i++) {
		sum += num[i] - '0';
	}
	cout << sum;
	system("PAUSE");


	return 0;
}