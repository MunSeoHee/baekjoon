#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n1, n2;
	while (true)
	{
		cin >> n1 >> n2;
		if (n1 == 0 && n2 == 0) {
			break;
		}
		else {
			cout << n1 + n2 << '\n';
		}
	}

	system("PAUSE");


	return 0;
}