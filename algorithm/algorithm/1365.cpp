#include<iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	vector<int> vec;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	vector<int>result;
	result.push_back(vec[0]);
	for (int i = 1; i < N; i++) {
		if (result[result.size() - 1] < vec[i]) {
			result.push_back(vec[i]);
		}
		else {
			int low = 0, high = result.size() - 1;

			while (low < high) {
				int mid = (low + high) / 2;
				if (result[mid] >= vec[i])
					high = mid;
				else
					low = mid + 1;
			}
			result[high] = vec[i];
		}
	}
	cout << N - result.size();

	system("PAUSE");


	return 0;
}