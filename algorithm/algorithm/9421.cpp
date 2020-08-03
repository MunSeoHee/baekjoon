#include<iostream>
#include <vector>
using namespace std;
int dp[1000001] = { 1, };
//0->한번 방문, -1->아님,1->맞음

int func(int n) {
	int sum = 0;
	
	while (n != 0) {
		sum += (n % 10) * (n % 10);
		n /= 10;
	}
	if (dp[sum]==-1) {
		return dp[sum];
	}
	if (sum == 1) {
		return 1;
	}
	if (dp[sum] == 0) {
		return -1;
	}
	dp[sum] = 0;
	dp[sum] = func(sum);
	return dp[sum];
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	vector<int> vec;
	cin >> N;
	fill_n(dp, 1000001, 1);
	for (int i = 0; i <= N; i++) {
		vec.push_back(i);
	}
	
	for (int i = 2; i <= N; i++) {
		if (vec[i] == 0) {
			continue;
		}
		for (int j = 2; j*vec[i] <= N; j++) {
			vec[j*vec[i]] = 0;
		}
	}

	for (int i = 2; i <= N; i++) {
		if (vec[i] != 0) {
			if (func(vec[i])==1) {
				cout << vec[i] << '\n';
			}
		}
	}


	system("PAUSE");


	return 0;
}