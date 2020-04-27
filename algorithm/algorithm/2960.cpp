#include<iostream>
#include<vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k,count=0, result;
	vector<int> vec;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		vec.push_back(i);
	}
	
	for (int i = 2; i <= n; i++) {
		for (int j = 1; i*j <= n; j++) {
			if (vec[i*j - 1] != 0) {
				vec[i*j - 1] = 0;
				count++;
				if (count == k) {
					result = i * j;
					break;
				}
			}
		}
		if (count == k) {
			break;
		}
	}
	cout << result;
	system("PAUSE");


	return 0;
}