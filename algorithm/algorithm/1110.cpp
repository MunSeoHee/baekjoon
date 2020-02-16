#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num,count=0,n,temp;

	cin >> num;
	n = num;

	while (true) {
		temp = n / 10 + n % 10;
		n = (n % 10) * 10 + temp % 10;
		count++;
		if (n == num) {
			break;
		}
	}
	cout << count;
	system("PAUSE");


	return 0;
}