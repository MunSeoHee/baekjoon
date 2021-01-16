#include<iostream>
#include <string>
using namespace std;
int event[401][401];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, s, t1, t2;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> t1 >> t2;
		event[t1][t2] = -1;
		event[t2][t1] = 1;

	}

	//k=i / i=j/j=k
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (event[j][k] == 0){
					if (event[j][i] == 1 && event[i][k] == 1){
						event[j][k] = 1;
					}
					else if (event[j][i] == -1 && event[i][k] == -1){
						event[j][k] = -1;
					}
				}
			}
		}
	}

	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> t1 >> t2;
		cout << event[t1][t2] << '\n';
	}
	system("PAUSE");
	return 0;
}