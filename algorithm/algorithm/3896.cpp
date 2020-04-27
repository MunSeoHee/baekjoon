#include<iostream>
#include<vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> test_case;
	int num,temp,strat,end;
	bool * vec = new bool[1299710];
	
	for (int i = 2; i < 1299710; i++) {
		for (int j = i; i*j>2 && i*j<1299710; j++) {
			vec[j*i] = true;
		}
	}


	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		test_case.push_back(temp);
	}

	
	for (int j = 0; j < test_case.size(); j++) {
		int temp = test_case[j];
		if (vec[temp] == true) {
			strat = temp;
			end = temp;
			
			while (true) {
				if (vec[--strat]!= true) {
					break;
				}
			}
			
			while (true) {
				if (vec[++end]!= true) {
					break;
				}
			}
			
			
			cout << end - strat<<'\n';
		}
		else {
			cout << 0 << '\n';
		}
	}
	
	system("PAUSE");


	return 0;
}