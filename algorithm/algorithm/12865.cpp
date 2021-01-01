#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int N, K, dp[101][100001], W[101], V[101];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> W[i] >> V[i];
	}

	for (int i = 0; i <= N; i++) {
		
		for (int j = 0; j <= K; j++) {
			if (i == 0) {
				if (j - W[i] >= 0) {
					dp[i][j] = V[i];
				}
			}
			else {
				dp[i][j] = dp[i - 1][j];
				if (j - W[i] >= 0) {
					dp[i][j] = max(dp[i][j], dp[i - 1][j - W[i]] + V[i]);
				}
			}
			
		}
	}
	cout << dp[N][K] << endl;
	system("PAUSE");

	return 0;
}