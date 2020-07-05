#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> vec;
	int num;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		if (find(vec.begin(), vec.end(), num % 42) != vec.end()) {
			continue;
		}
		else {
			vec.push_back(num % 42);

		}
	}
	cout << vec.size();

	system("PAUSE");


	return 0;
}