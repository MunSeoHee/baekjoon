#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> vec;
	int N, temp,sum=0;

	cin >> N;
	while (N--) {
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j <=i; j++) {
			sum += vec[j];
		}
	}

	cout << sum;
	system("PAUSE");


	return 0;
}