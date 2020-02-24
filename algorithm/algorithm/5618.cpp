#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int gcd(int n1, int n2) {
	if (n2 == 0) {
		return n1;
	}
	else {
		return gcd(n2, n1%n2);
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num,temp,result;
	vector<int> vec;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	if (num == 3) {
		result = gcd(vec[0], gcd(vec[1],vec[2]));
	}
	else {
		result = gcd(vec[0], vec[1]);
	}
	
	for (int i = 1; i <= result; i++) {
		if (result%i == 0) {
			cout << i<<'\n';
		}
	}



	system("PAUSE");


	return 0;
}