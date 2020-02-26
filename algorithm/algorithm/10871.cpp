#include<iostream>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X,temp;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (temp < X) {
			cout << temp << " ";
		}
	}

	system("PAUSE");


	return 0;
}