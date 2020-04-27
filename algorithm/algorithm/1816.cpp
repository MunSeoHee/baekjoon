#include<iostream>
#include <vector>
using namespace std;
const int MAX = 1e6 + 1;

int main(void) {
	ios::sync_with_stdio(false);
	vector<int>vec;
	vector<int>decimal;
	bool flag=true;
	cin.tie(NULL);

	for (int i = 1; i <= MAX; i++) {
		vec.push_back(i);
	}
	for (int i = 2; i <= MAX; i++) {
		if (vec[i - 1] == 0) continue;
		for (int j = 2; j*i <= MAX; j++) {
			vec[i*j - 1] = 0;
		}
	}
	for (int i = 1; i < MAX; i++) {
		if (vec[i] != 0) {
			decimal.push_back(vec[i]);
		}
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		for (int j = 0; j < decimal.size(); j++) {
			if (temp%decimal[j] == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
		flag = true;
	}

	system("PAUSE");


	return 0;
}