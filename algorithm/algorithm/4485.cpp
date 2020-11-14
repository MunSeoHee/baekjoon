#include<iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;

int route[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
int map[125][125];
int dp[125][125];
int N = 1;
int MAX_N = 987654321;

void func(int x, int y) {
	queue<pair<int, int>> Q;
	Q.push(make_pair(0, 0));

	while (Q.empty() == 0) {
		int x = Q.front().first;
		int y = Q.front().second;
		Q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + route[i][0];
			int ny = y + route[i][1];

			if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
				if (dp[nx][ny] > dp[x][y] + map[nx][ny]) {
					dp[nx][ny] = dp[x][y] + map[nx][ny];
					Q.push(make_pair(nx, ny));
				}

			}

		}
	}
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num = 1;
	while (1) {
		cin >> N;
		fill(&dp[0][0], &dp[N][N], MAX_N);
		if (N == 0) {
			break;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> map[i][j];
			}
		}
		dp[0][0] = map[0][0];
		func(0, 0);
		cout << "Problem "<<num<<": "<< dp[N - 1][N - 1] << endl;
		num++;

	}
	

	
	system("PAUSE");


	return 0;
}