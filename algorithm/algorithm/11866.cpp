#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

 int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	int temp = k-1;
	vector<int> vec;
	vector<int> tem;
	for (int i = 1; i <= n; i++) {
		vec.push_back(i);
	}
	cout << "<" << vec[temp];
	
	tem.push_back(temp);
	
	while (tem.size() != n) {
		int i = 0;
		while (i < k) {
			temp++;
			if (temp >= n) {
				temp = temp - n;
			}

			if (tem.end() == find(tem.begin(), tem.end(), temp)) {
				i++;
			}
		}
		cout << ", " << vec[temp];
		tem.push_back(temp);
		
	}
	cout << ">";
	system("PAUSE");


	return 0;
}