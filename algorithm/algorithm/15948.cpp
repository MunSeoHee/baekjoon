#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	int A[51], B[51];

	cin >> N >> M;
	for (int i = 0; i < M;i++) {
		cin >> A[i];
	}

	int result = 1 + (((1 << M) - 1) / N);
	cout << result<<endl;

	while (1) {

	}

	system("PAUSE");


	return 0;
}