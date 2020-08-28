#include<iostream>
#include <vector>
using namespace std;
int route[][2] = { {1,0},{0,1},{1,1} };
int max_candy = 0;
int N, M;
vector<vector<int>> vec;
void result(int candy, int x, int y) {
	if ( x == N - 1 && y == M - 1 && max_candy < candy + vec[x][y]) {
		candy += vec[x][y];
		max_candy = candy;
		return;
	}
	else if (x >= N  || y >= M ) {
		return;
	}

	candy += vec[x][y];
	for (int i = 0; i < 3; i++) {
		result(candy, x + route[i][0], y + route[i][1]);
	}
}
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

	result(0, 0, 0);
	cout << max_candy;

	system("PAUSE");


	return 0;
}