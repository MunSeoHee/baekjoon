#include <iostream>
#include <string>
using namespace std;
string s;
int N, max_n = -987654321987654321;

int calcu(char op, int n1, int n2) {
	int result = 0;
	switch (op)
	{
	case '+':
		result = n1 + n2;
		break;
	case '-':
		result = n1 - n2;
		break;
	case '*':
		result = n1 * n2;
		break;

	}
	return result;
}

void func(int n, int sum, char op) {
	if (n > N - 1) {
		if (max_n < sum) {
			max_n = sum;
		}
		return;
	}
	if (n + 2 < N) {
		int temp = calcu(s[n + 1], s[n] - '0', s[n + 2] - '0');
		if (n + 3 > N - 1) {
			func(n + 4, calcu(op, sum, temp), 'x');
		}
		else {
			func(n + 4, calcu(op, sum, temp), s[n + 3]);
		}
	}
	func(n + 2, calcu(op, sum, s[n] - '0'), s[n + 1]);

}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	cin >> s;

	func(0, 0, '+');
	cout << max_n;


	system("PAUSE");


	return 0;
}