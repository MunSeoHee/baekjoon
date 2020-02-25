#include<iostream>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k,index=0;
	vector<int>vec;

	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		vec.push_back(i);
	}
	cout << "<";
	while (1)
	{
		if (vec.size() == 1) {
			cout << vec[0];
			cout << ">";
			break;
		}
		else {
			index = (index + (k - 1)) % vec.size();
			cout << vec[index] << ", ";
			vec.erase(vec.begin() + index);
		}
		
	}

	system("PAUSE");


	return 0;
}