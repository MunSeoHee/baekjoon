#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;
	int c = 1;
	int s = 1;
	for (int i = N; i > K; i--) {
		c *= i;
	}
	for (int i = 1; i <= N - K; i++) {
		s *= i;
	}
	cout << c/s;
	system("PAUSE");


	return 0;
}