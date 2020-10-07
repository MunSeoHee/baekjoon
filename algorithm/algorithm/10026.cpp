#include<iostream>
#include <string>
#include <vector>
#include <string.h>

using namespace std;
vector<string> RGB;
vector<string> RB;
int route[4][2] = { { -1,0 },{ 0,-1 },{ 0,1 },{ 1,0 } };
bool visit[101][101];
int N;
void DFS(int init_x, int init_y, char color) {
	visit[init_x][init_y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = init_x + route[i][0];
		int ny = init_y + route[i][1];

		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (RGB[nx][ny] == color && !visit[nx][ny]) DFS(nx, ny, RGB[nx][ny]);
	}
}
void DFS2(int init_x, int init_y, char color) {
	visit[init_x][init_y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = init_x + route[i][0];
		int ny = init_y + route[i][1];

		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (RB[nx][ny] == color && !visit[nx][ny]) DFS2(nx, ny, RB[nx][ny]);
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string temp;
	
	int area_count = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		RGB.push_back(temp);
		for (int j = 0; j < N; j++) {
			if (temp[j] == 'G')
				temp[j] = 'R';
		}
		RB.push_back(temp);
	}
	memset(visit, false, sizeof(visit));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (RGB[i][j] > 0 && !visit[i][j]) {
				area_count++;
				DFS(i, j, RGB[i][j]);
			}
		}
	}
	cout << area_count <<" ";
	memset(visit, false, sizeof(visit));
	area_count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (RGB[i][j] > 0 && !visit[i][j]) {
				area_count++;
				DFS2(i, j, RB[i][j]);
			}
		}
	}
	cout << area_count;
	system("PAUSE");


	return 0;
}