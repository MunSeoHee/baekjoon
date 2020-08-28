#include<iostream>
using namespace std;
int n, result=0;
void plus_count(int x) {
	if (x == n) {
		result++;
		return;
	}
	else if (x > n) {
		return;
	}
	plus_count(x + 1);
	plus_count(x + 2);
	plus_count(x + 3);
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		cin >> n;
		plus_count(0);
		cout << result<<'\n';
		result = 0;
	}

	system("PAUSE");


	return 0;
}