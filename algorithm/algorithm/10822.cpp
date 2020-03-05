#include<iostream>
#include <string>
#include<vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 0, sum = 0;
	string s;
	vector<string> vec;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',') {
			vec.push_back(s.substr(n, i-n));
			n = i + 1;
		}
		else if (s[i + 1] == '\0') {
			vec.push_back(s.substr(n, i));
		}
	}
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
		sum += atoi(vec[i].c_str());
	}
	cout << sum;

	system("PAUSE");


	return 0;
}