#include<iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int sum = 1, i = 0, count = 0;

	while (1)
	{
		sum += i;
		count++;
		if (sum < n) {
			i += 6;
		}
		else {
			cout << count;
			break;
		}
	}
	system("PAUSE");


	return 0;
}