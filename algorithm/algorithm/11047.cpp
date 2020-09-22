#include<iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K,result=0;
	cin >> N >> K;

	vector<int> coin;

	while (N--) {
		int temp;
		cin>>temp;
		coin.push_back(temp);
	}

	for (int i = coin.size() - 1; i >= 0; i--) {
		if (coin[i] <= K) {
			result = result + (K / coin[i]);
			K = K % coin[i];
		}
		if (K <= 0) break;
	}
	cout << result;
	system("PAUSE");


	return 0;
}	