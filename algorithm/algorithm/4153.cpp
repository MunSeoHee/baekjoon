#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y, z;
	
	while (1)
	{
		cin >> x >> y >> z;
		if (x == 0 && y == 0 && z == 0) {
			break;
		}
		else {
			if (x*x + y * y == z * z) {
				cout << "right" << '\n';
			}
			else if (x*x + z * z == y * y) {
				cout << "right" << '\n';
			}
			else if (y*y + z * z == x * x) {
				cout << "right" << '\n';
			}
			else {
				cout << "wrong" << '\n';
			}
		}
	}
	

	system("PAUSE");


	return 0;
}