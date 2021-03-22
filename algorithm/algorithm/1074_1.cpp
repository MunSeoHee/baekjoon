#include<iostream>
#include<cmath>
using namespace std;
int Route[][2] = { { 0,0 },{ 0,1 },{ 1,0 },{ 1,1 } };
int r, c;
int result = 0;

void solve(int x, int y, long long int n) {
	if (x == r && y == c) {
		cout << result << "\n";
		return;
	}


	if (r < x + n && r >= x && c < y + n && c >= y)
	{
		solve(x, y, n / 2);
		solve(x, y + n / 2, n / 2);
		solve(x + n / 2, y, n / 2);
		solve(x + n / 2, y + n / 2, n / 2);
	}
	// (r,c)�� ���� ��и��� �ƴϸ� �׳� ��и��� ũ�⸸ŭ �����ش� (Ž���Ѱɷ� ģ��)
	else result += n * n;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long int N;
	cin >> N >> r >> c;
	solve(0, 0, (1 << N));

	system("PAUSE");


	return 0;
}