#include<iostream>
#include <vector>

using namespace std;
int main(void) {
	int num, n, temp;
	vector <int> list;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> n;
		list.push_back(n);
	}
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			if (list[i] > list[j]) {
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		cout << list[i]<< "\n";
	}
	system("PAUSE");
	

	return 0;
}