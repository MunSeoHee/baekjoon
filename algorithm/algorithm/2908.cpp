#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num1, num2;
	int num3, num4;

	cin >> num1 >> num2;

	num3 = num1 / 100;
	num1 = (num1 %100);
	num3 += (num1 / 10) * 10;
	num1 =num1%10;
	num3 += (num1 / 1) * 100;

	num4 = num2 / 100;
	num2 = (num2 % 100);
	num4 += (num2 / 10) * 10;
	num2 = num2 % 10;
	num4 += (num2 / 1) * 100;

	

	if (num3 > num4)
		cout << num3;
	else
		cout << num4;

	system("PAUSE");


	return 0;
}