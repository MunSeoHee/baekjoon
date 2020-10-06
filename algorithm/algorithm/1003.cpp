#include<iostream>
using namespace std;
int memo[41][2] = { {1,0},{0,1} };//{0개수, 1개수}
//void fibonacci(int n) {
//	if (n == 0) {
//		printf("0");
//		memo[n][0] += memo[0][0];
//	}
//	else if (n == 1) {
//		printf("1");
//		memo[n][1] += memo[0][1];
//	}
//	else {
//		fibonacci(n - 1);
//		fibonacci(n - 2);
//	}
//}

void fibo() {
	for (int i = 2; i < 41; i++) {
		memo[i][0] = memo[i - 1][0] + memo[i - 2][0];
		memo[i][1] = memo[i - 1][1] + memo[i - 2][1];
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num, n;
	fibo();
	cin >> num;
	while (num--) {
		cin >> n;
		cout << memo[n][0] << " " << memo[n][1]<<endl;

	}
	system("PAUSE");


	return 0;
}