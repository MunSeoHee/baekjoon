#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num,n;
	string str;
	char x, y;

	cin >> str;
	cin >> num;
	n = str.length();
	while (num--) {
		cin >> x;
		switch (x)
		{
		case 'L':
			if (n) {
				n--;
			}
			break;
		case 'D':
			if (!(n==str.size())) {
				n++;
			}
			break;
		case 'B':
			if (n) {
				str.erase(str.begin() + --n);
			}
			break;
		case 'P':
			cin >> y;
			str.insert(str.begin()+n, y);
			n++;
			break;
		default:
			break;
		}
	}
	cout << str;


	system("PAUSE");


	return 0;
}