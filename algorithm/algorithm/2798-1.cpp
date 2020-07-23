#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, temp;
	int sum, max = 0;
	int num[100] = { 0, };

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N;j++)
		{
			for (int z = j + 1; z < N; z++) {
				sum = num[i] + num[j] + num[z];
				if (sum > max&&sum <= M) {
					max = sum;
				}
			}
		}
	}
	cout << max;
	system("PAUSE");


	return 0;
}