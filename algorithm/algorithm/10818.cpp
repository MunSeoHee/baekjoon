#include<iostream>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num,temp,max= -1000000,min=1000000;
	cin >> num;
	while (num--) {
		cin >> temp;
		if (temp > max) {
			max = temp;
		}
		if (temp < min) {
			min = temp;
		}
	}
	cout << min << " " << max;

	system("PAUSE");


	return 0;
}