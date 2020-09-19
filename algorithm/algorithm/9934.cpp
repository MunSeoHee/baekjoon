#include<iostream>
#include <vector>
#include <math.h>
using namespace std;
int tree[10][2048];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int K;
	cin >> K;
	int level = K;
	vector<int> vec;
	for (int i = 0; i < pow(2, K) -1; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	int j = 0;
	int x = 2;
	int t = 0;
	tree[0][0] = vec[pow(2, K) / 2 - 1];

	while (K--) {
		for (int i = 0; i < pow(2,K); i++) {
			tree[K][j] = vec[i * x + t];
			/*cout << "tree[" << K << "][" << j << "] : " << vec[i * x + t] << endl;*/
			j++;
		}
		x *= 2;
		j = 0;
		t = (t + 1) * 2 - 1;
	}
	
	cout << tree[0][0] << endl;	
	for (int i = 1; i <= level; i++) {
		for (int j = 0; tree[i][j] != 0; j++) {
			cout << tree[i][j] << " ";
		}
		cout << endl;
	}
	

	system("PAUSE");


	return 0;
}