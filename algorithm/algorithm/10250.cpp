#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> num;
	int h, w, n;
	while (num--) {
		cin >> h >> w >> n;
		int x = n / h;
		if (n%h == 0) {
			cout << h * 100 + x<<'\n';
		}
		else {
			cout << (n%h) * 100 + x + 1 << '\n';
		}
	}

	system("PAUSE");


	return 0;
}