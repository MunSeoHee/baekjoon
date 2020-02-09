#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string serial1, string serial2) {
	int sum1 = 0, sum2=0;

	if (serial1.length() != serial2.length()) {
		return serial1.length() < serial2.length();
	}

	else if(serial1.length() == serial2.length()){
		for (int i = 0; i < serial1.length(); i++) {
			if (isdigit(serial1[i])) {
				sum1 += serial1[i] - 48;
			}
		}
		for (int i = 0; i < serial2.length(); i++) {
			if (isdigit(serial2[i])) {
				sum2 += serial2[i] - 48;
			}
		}

		if (sum1 != sum2) {
			return sum1 < sum2;
		}
		else {
			return serial1 < serial2;
		}
		
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int case_count;
	vector <string> vec;
	string test_case;


	cin >> case_count;

	for (int i = 0; i < case_count; i++) {
		cin >> test_case;
		vec.push_back(test_case);
	}

	sort(vec.begin(), vec.end(), compare);
	
	for (int i = 0; i < case_count; i++) {
		cout << vec[i] << endl;
	}
	
	system("PAUSE");


	return 0;
}