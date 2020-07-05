#include<iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, v;
	cin >> a >> b >> v;
	cout << (v - b - 1) / (a - b) + 1;
	
	system("PAUSE");


	return 0;
}