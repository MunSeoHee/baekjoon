#include<iostream>
#include <string>
#include<vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<string> vec;

	int n,x;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> str;
		vec.push_back(str);
		for (int k = 0; k < str.size(); k++) {
			for (int j = 0; j < x; j++) {
				cout << vec[i][k];
			}
		}
		cout << '\n';
	}
	system("PAUSE");


	return 0;
}