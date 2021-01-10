#include<iostream>
#include <string>
#include<algorithm>
using namespace std;
int bus[101][101] = { 0, };
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b, c;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (!bus[a][b]) {
			bus[a][b] = c;
		}
		else {
			bus[a][b] = min(bus[a][b], c);
		}
		
	}
	//for (int i = 0; i <= n; i++) {
	//	for (int j = 0; j <= n; j++) {
	//		cout << bus[i][j] << " ";
	//	}
	//	cout << "\n";
	//}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (j == k) {
					bus[j][k] = 0;
					continue;
				}
				if (bus[j][i] && bus[i][k]){
					if (bus[j][k] == 0 && bus[j][i] + bus[i][k] == 0) {
						bus[j][k] = 0;
					}
					else if (bus[j][k] == 0) {
						bus[j][k] = bus[j][i] + bus[i][k];
					}
					else if (bus[j][i] + bus[i][k] == 0) {
						bus[j][k] = bus[j][k];
					}
					else {
						bus[j][k] = min(bus[j][k], bus[j][i] + bus[i][k]);
					}
				}
					
			}
		}
	}

	for (int i = 1;i <= n; i++) {
		for (int j = 1; j <= n;j++) {
			cout << bus[i][j] << " ";
		}
		cout << "\n";
	}


	system("PAUSE");


	return 0;
}