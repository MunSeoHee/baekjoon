#include<iostream>
#include <algorithm>
using namespace std;
bool desc(int a, int b) {
	return a > b;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N,max_n=0;
	int rope[100000];

	cin >> N;
	
	for (int i = 0; i < N;i++) {
		cin >> rope[i];
	}
	sort(rope,rope+N, desc);

	for (int i = 0; i < N; i++) {
		int result = rope[i] * (i + 1);
		max_n = max(result, max_n);
	}

	cout << max_n;

	system("PAUSE");


	return 0;
}