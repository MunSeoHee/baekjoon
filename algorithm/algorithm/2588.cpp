#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num1, num2, temp;
	cin >> num1 >> num2;
	temp = num2;
	for (int i = 0; i < 3; i++) {
		cout << num1 * (num2%10)<<'\n';
		num2 = (num2 - num2%10)/10;
	}
	cout << num1 * temp;
	system("PAUSE");


	return 0;
}