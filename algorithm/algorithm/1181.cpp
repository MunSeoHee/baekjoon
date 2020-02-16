#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string serial1, string serial2) {
	if (serial1.length() != serial2.length()) {
		return serial1.length() < serial2.length();
	}
	else {
		return serial1 < serial2;
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
		if (find(vec.begin(), vec.end(), test_case) != vec.end()) {
			continue;
		}
		else {
			vec.push_back(test_case);
		}
		
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	system("PAUSE");


	return 0;
}