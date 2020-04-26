#include<iostream>
#include<vector>
using namespace std;
bool vec[1299710] = { true, };

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> test_case;
	int num,temp,strat=2,end=1299709;

	vec[0] = false;

	for (int i = 2; i <= 1299709; i++) {
		if (vec[i-1] == 0)continue;
		for (int j = 2; j*i <= 1299709; j++) {
			vec[j*i - 1] = false;
		}
	}


	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		test_case.push_back(temp);
	}


	for (int j = 0; j < test_case.size(); j++) {
		for (int i = test_case[j]; i > 0; i--) {
			if (vec[i - 1]) {
				strat = i;
				break;
			}
		}
		for (int i = test_case[j]; i <= 1299709; i++) {
			if (vec[i - 1]) {
				end = i;
				break;
			}
		}

		cout << -(strat - end)<<'\n';
	}
	
	system("PAUSE");


	return 0;
}