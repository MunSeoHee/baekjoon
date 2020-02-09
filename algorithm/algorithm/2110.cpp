#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector <int> arr;

	int home, wifi, num;

	cin >> home >> wifi;

	for (int i = 0; i < home; i++) {
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < home; i++) {
		cout << arr[i];
	}
	system("PAUSE");


	return 0;
}