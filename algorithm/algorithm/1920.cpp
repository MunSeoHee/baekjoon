#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool search(int r, int l, int find, int * arr) {
	int R = r;
	int L = l;
	while (L <= R) {
		int mid = (R + L) / 2;
		if ( (arr[mid]) == find)
			return 1;
		if (find < arr[mid])
			R = mid - 1;
		else
			L = mid + 1;

	}
	return 0;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num, n, num2, k;
	vector <int> list;
	vector <int> result;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> n;
		list.push_back(n);
	}

	sort(list.begin(), list.end());

	cin >> num2;
	for (int i = 0; i < num2; i++) {
		cin >> n;
		k = search(num-1, 0, n, list.data());
		result.push_back(k);
		
	}

	for (int i = 0; i < num2; i++) {
		cout << result[i] << "\n";
	}


	system("PAUSE");


	return 0;
}