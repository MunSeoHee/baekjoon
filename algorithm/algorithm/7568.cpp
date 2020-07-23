#include<iostream>

using namespace std;
int xy[50][2];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, x, y;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> xy[i][0] >> xy[i][1];
	}

	for (int i = 0; i < N; i++) {
		int rank = 1;
		for (int j = 0; j < N; j++) {
			if (j == i) {
				continue;
			}
			else {
				if (xy[j][0] > xy[i][0] && xy[j][1] >xy[i][1]) {
					rank++;
				}
			}
		}
		cout << rank <<" ";
	}
	system("PAUSE");


	return 0;
}