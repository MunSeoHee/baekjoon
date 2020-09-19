#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int vec[50002];
	vector<int> v;
	for (int i = 0; i <= 50001; i++) {
		vec[i] = i; 
	}

	for (int i = 2; i <= 50001; i++) { 
		if (vec[i] == 0) { 
			continue; 
		} 
		else {
			v.push_back(vec[i]);
		}
		for (int j = 2; j*vec[i] <= 50001; j++) {
			vec[j*vec[i]] = 0; 
		} 
	}
	
	vector<int> mul;

	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			mul.push_back(v[i] * v[j]);
		}
	}
	
	sort(mul.begin(), mul.end());

	int T;
	cin >> T;
	while (T--) {
		int K;
		cin >> K;
		int answer;

		int low = 0, high = mul.size() - 1;

		while (low <= high) {
			int mid = (low + high) / 2;
			if (mul[mid] >= K) {
				answer = mid;
				high = mid - 1;
			}
			else
				low = mid + 1;
		}
		cout << mul[answer]<<'\n';

	}
	system("PAUSE");


	return 0;
}