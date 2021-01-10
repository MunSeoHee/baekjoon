#include<iostream>
#include <string>
#include <bitset>
#include <vector>
#include<algorithm>
const int MAX = 2147483647;
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int stats[20][20];
	
	int N,result=MAX;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> stats[i][j];
		}
	}

	for (int i = (1 << ((N / 2) - 1)); i < (1 << N); i++) {
		
		int bit_count=0;
		for (int j = 0; j < N;j++) {
			if (i&(1 << j)) {
				bit_count += 1;
			}
		}
		if (bit_count != N / 2)continue;
		vector<int> start, link;
		for (int j = 0; j < N;j++) {
			if (i&(1 << j)) {
				start.push_back(j);
			}
			else {
				link.push_back(j);
			}
		}

		int start_stats = 0, link_stats = 0;
		for (int j = 0; j < N/2; j++) {
			for (int k = 0; k < N/2; k++) {
				start_stats += stats[start[j]][start[k]];
				link_stats+=stats[link[j]][link[k]];
			}
		}

		int min_value = start_stats - link_stats;
		if (min_value < 0) min_value *= -1;
		result = min(result, min_value);

	}
	cout << result;

	system("PAUSE");


	return 0;
}