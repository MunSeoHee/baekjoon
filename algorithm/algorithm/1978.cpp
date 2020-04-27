#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int>vec;
	vector<int>decimal;
	int n,max=0,count=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
		if (temp > max) {
			max = temp;
		}
	}
	for (int i = 1; i <= max; i++) {
		decimal.push_back(i);
	}
	for (int i = 2; i <= max; i++) {
		for (int j = 2; j*i <= max; j++) {
			decimal[i*j - 1] = 0;
		}
	}
	for (int i = 2; i <= max; i++) {
		if (decimal[i - 1] != 0) {
			if (find(vec.begin(), vec.end(), i) != vec.end()) {
				count++;
			}
		}
	}
	cout << count;
	system("PAUSE");


	return 0;
}