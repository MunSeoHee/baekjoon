#include<iostream>
#include<cmath>
using namespace std;
int Route[][2] = { {0,0}, {0,1}, {1,0}, {1,1} };
int r, c;
int result = 0;

bool z(int x, int y, long long int N) {
	if (N > 2) {
		if (z(x, y, N / 2)) {
			return true;
		}
		else if (z(x, y + (N / 2), N / 2)) {
			return true;
		}
		else if (z(x + (N / 2), y, N / 2)) {
			return true;
		}
		else if (z(x + (N / 2), y + (N / 2), N / 2)) {
			return true;
		}
	}
	else {
		for (int i = 0; i < 4; i++) {
			if (x + Route[i][0] == r && y + Route[i][1] == c) {
				return true;
			}
			else {
				result +=1;
			}
		}
		return false;
	}
	return false;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int N;
	cin >> N >> r >> c;
	z(0, 0, (1 << N));
	cout << result;
	system("PAUSE");


	return 0;
}