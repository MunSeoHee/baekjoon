#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string world;
	cin >> world;;
	int count = 1;
	for (int i = 0; i < world.length(); i++) {
		if (count > 10) {
			cout << "\n";
			count = 1;
		}
		cout << world[i];
		count++;
	}

	system("PAUSE");


	return 0;
}