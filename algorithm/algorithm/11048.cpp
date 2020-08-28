#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int dp[1002][1002] = { 0, };
int N, M;
vector<vector<int>> vec;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	vector<int> temp_v;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int temp;
			cin >> temp;
			temp_v.push_back(temp);
		}
		vec.push_back(temp_v);
		temp_v.clear();
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			dp[i][j] = max(dp[i - 1][j], max(dp[i][j - 1], dp[i - 1][j - 1]));
			dp[i][j] += vec[i-1][j-1];
		}
	}
	cout << dp[N][M];

	system("PAUSE");


	return 0;
}