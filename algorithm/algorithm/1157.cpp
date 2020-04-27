#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int result[26] = { 0, };
	int max = 0, answer;
	bool check = true;
	string s;
	cin >> s;
	
	for (int i = 0; i < s.length(); i++) {
		s[i]=toupper(s[i]);
		result[int(s[i]) - 65]++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < result[i]) {
			max = result[i];
			answer = i;
			check=true;
		}
		else if (max == result[i]) {
			check = false;
		}
	}
	if (check) {
		cout << char(answer+65);
	}
	else {
		cout << '?';
	}
	
	system("PAUSE");



	return 0;
}