#include<iostream>
int flavor[10][2];
int m = 1000000000;
using namespace std;
int N;
void flav(int n, int s, int b) {
	if (s >= b && s - b < m) {
		m = s - b;
	}
	else if (s < b && b - s < m) {
		m = b - s;
	}
	for (int i = n+1; i < N; i++) {
		flav(i, s*flavor[i][0], b+flavor[i][1]);
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> flavor[i][0] >> flavor[i][1];
	}
	for (int i = 0; i < N; i++) {
		flav(i, flavor[i][0], flavor[i][1]);
	}

	cout << m;

	system("PAUSE");


	return 0;
}