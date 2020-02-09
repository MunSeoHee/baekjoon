#include<iostream>
#include <string>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int case_count;
	vector <string> vec;
	string test_case;
	int sum = 0;
	int score = 1;

	cin >> case_count;
	for (int i = 0; i < case_count; i++) {
		cin >> test_case;
		vec.push_back(test_case);
	}
	for (int i = 0; i < case_count; i++) {
		for (int j = 0; j < vec[i].length(); j++) {
			if (vec[i][j] == 'O') {
				sum += score;
				score++;
			}
			else {
				score = 1;
			}
		}
		cout << sum << endl;
		sum = 0;
		score = 1;
	}

	system("PAUSE");


	return 0;
}