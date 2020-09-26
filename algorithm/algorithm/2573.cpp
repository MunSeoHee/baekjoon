#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <string.h>

int route[4][2] = { {-1,0},{0,-1},{0,1},{1,0} };
bool visit[301][301];
using namespace std;
int v[301][301];
int N, M;

void DFS(int init_x, int init_y) {
	visit[init_x][init_y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = init_x + route[i][0];
		int ny = init_y + route[i][1];

		if (nx < 1 || nx >= N - 1 || ny < 1 || ny >= M - 1) continue;
		if (v[nx][ny] > 0 && !visit[nx][ny]) DFS(nx, ny);
	}
}

void year() {
	int vec[301][301];
	for (int x = 0; x < N; x++)
		for (int y = 0; y < M; y++)
			vec[x][y] = v[x][y];
	for (int i = 1; i < N - 1; i++) {
		for (int j = 1; j < M - 1; j++) {
			if (vec[i][j] != 0) {
				int temp = 0;
				for (int z = 0;z < 4;z++) {
					if (vec[i + route[z][0]][j + route[z][1]] == 0) {
						temp++;
					}
				}
				if (v[i][j] - temp < 0) {
					v[i][j] = 0;
				}
				else {
					v[i][j] = v[i][j] - temp;
				}
			}
			
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> t;
	int result = 0;
	cin >> N >> M;
	

	for (int i = 0; i < N;i++) {
		for (int j = 0;j < M;j++) {
			cin >> v[i][j];
		}
	}

	while (1) {
		int island_count=0;
		memset(visit, false, sizeof(visit));
		bool check=false;
		for (int i = 1; i < N - 1; i++) {
			for (int j = 1; j < M - 1; j++) {
				if (v[i][j] > 0 && !visit[i][j]) {
					island_count++;
					if (island_count >= 2) {
						check = true;
						break;
					}
					DFS(i, j);
				}
			}
		}
		if (check) break;
		if (island_count == 0) {
			cout << "0";
			return 0;
		}
		year();	
		result++;
		
	}
	cout << result;



	system("PAUSE");


	return 0;
}