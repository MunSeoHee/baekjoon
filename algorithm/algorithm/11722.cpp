#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int dp[1001];
	int seq[1001];
	int N,max_dp=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> seq[i];
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (seq[j] > seq[i]&& dp[j] + 1 > dp[i]&&max_dp<dp[j]) {
				max_dp = dp[j];	
			}
		}
		dp[i] += max_dp;
		max_dp = 0;
	}
	
	for (int i = 0; i < N; i++) {
		if (dp[i] > max_dp) {
			max_dp = dp[i];
		}
	}
	cout << max_dp;

	system("PAUSE");


	return 0;
}