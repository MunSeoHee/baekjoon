#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> vec1, vec2;
	int n,sum=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		vec1.push_back(temp);
	}
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		vec2.push_back(temp);
	}
	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end());

	for (int i = 1; i <= n; i++) {
		sum += vec2[n - i] * vec1[i - 1];
	}
	cout << sum;
	system("PAUSE");


	return 0;
}