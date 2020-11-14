#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int route[4][2] = { { -1,0 },{ 0,-1 },{ 0,1 },{ 1,0 } };
int map[125][125];
bool visit[125][125];
int result= 987654321;
int N = 1;

void func(int x, int y, int sum) {
	if (x == N - 1 && y == N - 1) {
		if (result < sum) {
			result = sum;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (x + route[i][0] >= 0 && x + route[i][0] < N &&y + route[i][1] >= 0&& y + route[i][1]<N)
			
			func(x + route[i][0], y + route[i][1], sum+map[x][y]);
	}
}



int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num = 1;
	while (1) {
		cin >> N;
		if (N == 0) {
			break;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> map[i][j];
			}
		}
		func(0, 0, 0);
		cout << "Problem " << num << ": " << result << endl;
		num++;

	}



	system("PAUSE");


	return 0;
}