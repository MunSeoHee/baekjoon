#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

int triangle[501][501];
int dp[501][501];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int max_n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cin >> triangle[i][j];
		}
	}
	dp[0][0] = triangle[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j] + triangle[i][j];
			}
			else if (j == i) {
				dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
			}
			if (i == n - 1) {
				if (dp[i][j] > max_n) {
					max_n = dp[i][j];
				}
			}
		}
	}
	cout << max_n;

	system("PAUSE");


	return 0;
}