#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num,j=0;
	vector <int> vec;
	for (int i = 0; i < 28; i++) {
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());
	for (int i = 1; i <= 30; i++) {
		if (vec[j] != i) {
			cout << i<<endl;
			continue;
		}
		j++;
	}
	system("PAUSE");


	return 0;
}