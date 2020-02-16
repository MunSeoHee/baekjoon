#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string world;
	cin >> world;
	for (int i = 0; i < world.length(); i++) {
		if (67<world[i]) {
			cout << (char)(world[i] - 3);
		}
		else {
			cout << (char)(world[i] + 23);
		}
	}
	system("PAUSE");


	return 0;
}