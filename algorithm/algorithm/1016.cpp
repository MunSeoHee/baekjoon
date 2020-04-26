#include<iostream>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	

	long long min, max,count=0;
	cin >> min >> max;
	vector <long long> vec;

	for (long long i = min; i <= max; i++) {
		vec.push_back(i);
	}

	for (long long i = 2; i*i <= max; i++) {
		long long x = min / (i*i);
		if (x*i*i != min)x++;
		for (long long j = x; i*i*j <= max; j++) {
			vec[i*i*j-min] = 0;
		}
	}

	for (int i = 0; i <= max-min; i++) {
		if (vec[i] != 0) {
			count++;
		}
	}

	cout << count;

	system("PAUSE");


	return 0;
}