#include<iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	int m = 0, result=0, max_n=0;
	vector<string> vec;
	cin >> N;
	while (N--) {
		string temp;
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		m = count(vec.begin(), vec.end(), vec[i]);
		if (m > max_n) {
			result = i;
			max_n = m;
		}
	}

	cout << vec[result];


	system("PAUSE");


	return 0;
}