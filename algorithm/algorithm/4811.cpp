#include<iostream>
int N;
long long int dp[31][31] = { 0, };
using namespace std;

long long int pill(int w, int h) {
	if (dp[w][h]) {
		return dp[w][h];
	}
	if (w == 0) {
		return 1;
	}
	dp[w][h] = pill(w-1, h + 1);
	if (h > 0) {
		dp[w][h] += pill(w, h - 1);
	}
	return dp[w][h];
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	while (1) {
		cin >> N;
		if (N == 0) {
			break;
		}
		cout << pill(N, 0) << endl;
	}

	system("PAUSE");


	return 0;
}