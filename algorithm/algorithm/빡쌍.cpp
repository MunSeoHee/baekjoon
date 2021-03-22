#include<iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> B, S;
	int N, M, E, temp;
	cin >> N >> M >> E;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (temp > E) {
			B.push_back(temp - E);
		}
		else {
			S.push_back(E - temp);
		}
	}
	sort(B.begin(), B.end());
	sort(S.begin(), S.end());

	int result = 0, sum=0;
	for (int i = 0; i <M ; i++) {
		result = min(S[M - i] + B[i], B[M-i]+S[i]);
	}

	cout << result;

	system("PAUSE");


	return 0;
}