#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int m, d, total=0;
	int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cin >> m >> d;
	for (int i = 1; i < m; i++) {
		total += arr[i - 1];
	}
	switch ((total+d)%7)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	}
	system("PAUSE");


	return 0;
}