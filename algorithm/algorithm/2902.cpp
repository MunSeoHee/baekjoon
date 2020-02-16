#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string word;

	cin >> word;
	cout << word[0];
	for (int i = 1; i < word.length(); i++) {
		if (word[i - 1] == '-') {
			cout << word[i];
		}
	}

	system("PAUSE");


	return 0;
}