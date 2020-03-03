#include<iostream>
using namespace std;

int gcd(int n1, int n2) {
	if (n2 == 0) {
		return n1;
	}
	else {
		return gcd(n2, n1%n2);
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;
	cin >> x >> y;
	cout << gcd(x, y);
	cout << "\n";
	cout << x * y / gcd(x, y);

	system("PAUSE");


	return 0;
}