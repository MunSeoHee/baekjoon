#include<iostream>
#include <set>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	
	int T, k, n;
	char c;
	cin >> T;
	while (T--) {
		multiset <int> pq;
		cin >> k;
		while (k--) {
			cin >> c >> n;
			if (c == 'I') {
				pq.insert(n);
			}
			else {
				if (pq.empty())continue;
				if (n == -1) {
					pq.erase(pq.begin());
				}
				else {
					pq.erase(--pq.end());
				}
			}

		}
		if (pq.empty()) {
			cout << "EMPTY\n";
		}
		else {
			cout << *(--pq.end()) << " " << *pq.begin() << '\n';
		}
	}
	system("PAUSE");


	return 0;
}