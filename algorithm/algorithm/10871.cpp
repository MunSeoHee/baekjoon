#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector <int> v;

	int N, X,temp;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	v.sort(v.begin(), v.end());

	system("PAUSE");


	return 0;
}