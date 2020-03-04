#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<int>>vec;
	vector <int> tem;
	int num, temp, max=0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> temp;
			tem.push_back(temp);
		}
		vec.push_back(tem);
		tem.clear();
	}
	for (int i = 0; i < num; i++) {
		if (vec[i][0] == vec[i][1]) {
			if (vec[i][1] == vec[i][2]) {
				temp = vec[i][0] * 1000 + 10000;
				if (max < temp) {
					max = temp;
				}
			}
			else if (vec[i][1] != vec[i][2]) {
				temp = vec[i][0] * 100 + 1000;
				if (max < temp) {
					max = temp;
				}
			}
		}
		else if (vec[i][1] == vec[i][2]) {
			if (vec[i][2] == vec[i][0]) {
				temp = vec[i][0] * 1000 + 10000;
				if (max < temp) {
					max = temp;
				}
			}
			else if (vec[i][2] != vec[i][0]) {
				temp = vec[i][1] * 100 + 1000;
				if (max < temp) {
					max = temp;
				}
			}
		}
		else if (vec[i][0] == vec[i][2]) {
			if (vec[i][2] == vec[i][1]) {
				temp = vec[i][0] * 1000 + 10000;
				if (max < temp) {
					max = temp;
				}
			}
			else if (vec[i][0] != vec[i][1]) {
				temp = vec[i][0] * 100 + 1000;
				if (max < temp) {
					max = temp;
				}
			}
		}
		else {
			sort(vec[i].begin(), vec[i].end());
			temp = vec[i][2] * 100;
			if (max < temp) {
				max = temp;
			}
		}

	}
	cout << max;

	system("PAUSE");


	return 0;
}