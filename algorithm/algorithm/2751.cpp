#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
	int num, n;
	vector <int> list;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> n;
		list.push_back(n);
	}
	
	sort(list.begin(), list.end());

	for (int i = 0; i < num; i++) {
		cout << list[i] << "\n";
	}
	system("PAUSE");


	return 0;
}