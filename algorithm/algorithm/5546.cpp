#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a[101] = { 0, }, dp[101][4][4] = { 0, };
	int N, K;

	cin >> N >> K;

	while (K--) {
		int t1, t2;
		cin >> t1 >> t2;
		a[t1] = t2;
	}

	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			if (a[1]!=0 && i != a[1]) 
				continue;
			if (a[2]!=0 && j != a[2]) 
				continue;
			dp[2][i][j] = 1;
		}
	}

	for (int i = 3; i <= N; i++) {
		for (int j = 1; j <= 3; j++) {
			if (a[i]!=0 && j != a[i]) 
				continue;
			for (int k = 1; k <= 3; k++) {
				if (a[i - 1] != 0 && k != a[i - 1])
					continue;
				for (int l = 1; l <= 3; l++) {
					if (j != k || j != l) {
						dp[i][k][j] = (dp[i][k][j] + dp[i - 1][l][k]) % 10000;
					}
					
				}
			}
		}
	}
	int result = 0;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			result = (result + dp[N][i][j]) % 10000;
		}
	}
	cout << result;

	system("PAUSE");


	return 0;
}