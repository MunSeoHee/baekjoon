#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n,sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	cout << sum;
	system("PAUSE");


	return 0;
}