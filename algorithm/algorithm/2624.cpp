#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int dp[101][10001] = { 0, };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector <pair<int, int>> vec;
	int value, case_count, coint_value, coint_count;

	cin >> value >> case_count;
	for (int i = 0; i < case_count; i++) {
		cin >> coint_value >> coint_count;
		vec.push_back(make_pair(coint_value, coint_count));
	}
	sort(vec.begin(), vec.end());
	
	
	for (int i = 0; i < case_count; i++) {
		dp[i][0] = 1;
		for (int j = 0; j <= vec[i].second; j++) {
			for (int k = j * vec[i].first; k <= value; k++) {
				dp[i + 1][k] += dp[i][k - j * vec[i].first];
			}
		}
	}
	
	cout << dp[case_count][value];
	cout << endl;
	for (int i = 0; i <= case_count; i++) {
		for (int j = 0; j <= value; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}



	system("PAUSE");


	return 0;
}