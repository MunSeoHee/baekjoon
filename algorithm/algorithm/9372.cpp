#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	int N, M;
	int temp1, temp2;
	cin >> T;
	while (T--) {
		cin >> N >> M;
		while (M--) {
			cin >> temp1 >> temp2;
		}
		cout << N - 1<<'\n';
	}

	system("PAUSE");


	return 0;
}