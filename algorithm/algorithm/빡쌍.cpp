#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<string> vec;
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		vec.push_back(str);
	}
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i][0] << endl;
	}
	system("PAUSE");


	return 0;
}