#include<iostream>
#include <vector>
#include <utility>
#include<algorithm>
#include <functional>
using namespace std;
vector<int>card;
int n, m;
pair <int, int> p(-1,-1);
int sum(int x) {
	int s=0;
	for (int i = x; i < n; i++) {

		for (int j = i + 1; j < n; j++) {

			for (int z = j + 1; z < n; z++) {
				s = card[i] + card[j] + card[z];
				if (s == m) {
					return m;
				}
				else {
					if (m - s < p.first || p.first<0) {
						p.first = m - s;
						p.second = s;
					}
					s = 0;
				}

			}

			
			
		}

	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	
	int temp;
	cin >> n >> m;
	int N = n;
	bool flag = false;
	while (N--) {
		cin >> temp;
		card.push_back(temp);
	}
	
	
	if (sum(0) == m) {
		flag = true;
	}
	if (flag) {
		cout << m;
	}
	else {
		cout << p.second;
	}

	system("PAUSE");


	return 0;
}