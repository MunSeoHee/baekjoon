#include<iostream>
#include <string>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	int num = 0;
	vector<string> vec;

	for (int i = 0; i < 8; i++) {
		cin >> str;
		vec.push_back(str);
	}
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < 8; j++) {
				if (j % 2 == 0) {
					if (vec[i][j] == 'F') {
						num++;
					}
				}
			}
		}
		else {
			for (int j = 0; j < 8; j++) {
				if (j % 2 == 1) {
					if (vec[i][j] == 'F') {
						num++;
					}
				}
			}
		}
	}

	cout << num;
	system("PAUSE");


	return 0;
}