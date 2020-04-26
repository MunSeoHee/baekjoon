#include<iostream>
#include<vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num,count=0,sum=0;
	cin >> num;
	vector<int>vec;
	for (int i = 1; i <= num; i++) {
		vec.push_back(i);
	}
	vec[0] = 0;
	for (int i = 2; i <= num; i++) {
		if (vec[i - 1] == 0) continue;
		for (int j = 2; j*i <= num; j++) {
			vec[j*i - 1] = 0;
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == 0) continue;
		for (int j = i; sum <= num; j++) {
			if (j < vec.size()) {
				if (vec[j] != 0) {
					sum += vec[j];
					if (sum == num) {
						count++;
						break;
					}
				}
			}
			else break;
		}
		sum = 0;
	}
	cout << count;
	system("PAUSE");


	return 0;
}