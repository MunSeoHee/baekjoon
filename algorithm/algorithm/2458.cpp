#include<iostream>
#include <string>
using namespace std;
int map[501][501];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, a, b;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		map[a][b] = 1;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			for (int k = 1; k <= N; k++) {
				if (map[j][i] && map[i][k])
					map[j][k] = 1;
			}
		}
	}
	int answer = 0;
	for (int i = 1; i <= N; i++) {
		bool flag = true;
		for (int j = 1; j <= N; j++) {
			if (i == j)continue;
			if (map[i][j] == 0 && map[j][i] == 0) {
				flag=false;
				break;
			}
				
		}
		if (flag) {
			answer++;
		}
	}
	cout << answer << '\n';

	system("PAUSE");


	return 0;
}