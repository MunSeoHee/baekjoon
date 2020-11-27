#include<iostream>
#include <string>
#include<vector>
#include<queue>
using namespace std;
int N, M;
int MAP[101][101];
string temp;
int Route[4][2] = { {0,-1},{1,0},{0,1},{-1,0} };

void bfs() {
	queue<pair<int,int>> q;
	q.push(make_pair(0, 0));
	int nx, ny;
	pair<int, int> current;

	while (!q.empty()) {
		current = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			nx = current.first + Route[i][0];
			ny = current.second + Route[i][1];
			if (0 <= nx && nx < N && 0 <= ny && ny < M && MAP[nx][ny]==1) {
				q.push(make_pair(nx, ny));
				MAP[nx][ny] = MAP[current.first][current.second] + 1;
			}
		}
	}

}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	

	cin >> N >> M;
	for (int i = 0; i < N;i++) {
		cin >> temp;
		for (int j = 0; j < M; j++) {
			MAP[i][j] = temp[j]-'0';
		}
	}

	
	bfs();
	cout << MAP[N - 1][M - 1];

	
	

	system("PAUSE");


	return 0;
}