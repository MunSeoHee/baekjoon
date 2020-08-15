#include<iostream>
using namespace std;
int map[500][500];
int result[500][500] = { -1, };
int M, N;
int moved[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };

int func(int x, int y) {
	if (x == M - 1 && y == N - 1) {
		return 1;
	}
	if (result[x][y] != -1) {
		return result[x][y];
	}
	for (int i = 0; i < 4; i++) {
		int nextX = x + moved[i][0];
		int nextY = y + moved[i][1];
		if (map[x][y] > map[nextX][nextY] && nextX >= 0 && nextY >= 0 && nextX < M && nextY < N) {
			if (result[x][y] == -1) {
				result[x][y] = func(nextX, nextY);
			}
			else {
				result[x][y] += func(nextX, nextY);			}	
		}
	}
	if (result[x][y] == -1) {
		result[x][y] = 0;
	}
	return result[x][y];
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	fill(&result[0][0], &result[500 - 1][500], -1);
	
	cin >> M >> N;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	func(0, 0);
	cout << result[0][0];

	system("PAUSE");


	return 0;
}