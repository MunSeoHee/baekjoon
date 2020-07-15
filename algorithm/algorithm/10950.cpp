#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int temp1, temp2;
	cin >> n;
	while (n--)
	{
		cin >> temp1 >> temp2;
		cout << temp1 + temp2<<'\n';

	}

	system("PAUSE");


	return 0;
}