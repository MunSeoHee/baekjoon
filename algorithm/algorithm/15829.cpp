#include<iostream>
#include <string>
using namespace std;
const int MOD = 1234567891;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int L;
	long long int sum = 0, l = 1;
	cin >> L;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		
		sum = (sum+ l * (int(str[i]) - 96) )% MOD;;
		l = (l*31) % MOD;;
	}
	cout << sum;
	system("PAUSE");


	return 0;
}