#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, m;

	cin >> n >> m;

	if (n > m) {
		cout << n - m;
	}
	else {
		cout << m - n;
	}

	system("PAUSE");


	return 0;
}