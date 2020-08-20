#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
bool desc(int i, int j) {
	return j < i;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	long long sum = 0;
	vector<int> vec;
	cin >> N;
	while (N--) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(),vec.end(), desc);
	for (int i = 0; i < vec.size(); i++) {
		int money = vec[i] - i;
		if (money > 0) {
			sum += money;
		}
	}
	cout << sum;

	system("PAUSE");


	return 0;
}