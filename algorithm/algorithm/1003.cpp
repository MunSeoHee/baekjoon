#include<iostream>
using namespace std;
int memo[41] = { 1,1 };
int fibonacci(int n) {
	if (n == 0) {
		zero++;
		return 0;
	}
	else if (n == 1) {
		one++;
		return 1;
	}
	else {
		memo[n] = fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num, n;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		fibonacci(n);
		cout << zero << " " << one;
		zero = 0;
		one = 0;
	}
	system("PAUSE");


	return 0;
}