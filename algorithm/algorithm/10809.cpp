#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin >> str;
	
	int alpha[26];
	fill_n(alpha, 26, -1);

	for (int i = 0; i < str.length(); i++) {
		if (alpha[int(str[i]) - 97] == -1){
			alpha[int(str[i]) - 97] = i;
		}
		
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i]<<" ";
	}
	system("PAUSE");


	return 0;
}