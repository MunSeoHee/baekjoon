#include<iostream>

using namespace std;
int arr[15][15];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num, k ,n, sum=0;
	cin >> num;
	for (int i = 0; i < 15; i++) {
		if (i == 0) {
			for (int j = 0; j < 15; j++) {
				arr[i][j] = j+1;
			
			}
		}
		else {
			for (int j = 0; j < 15; j++) {
				if (j == 0) {
					arr[i][j] = 1;
				
				}
				else {
					for (int x = 0; x <= j; x++) {
						sum += arr[i - 1][x];
					}
					arr[i][j] = sum;
					
					sum = 0;
				}
			}
		}
		
	}
	while (num--) {
		cin >> k;
		cin >> n;

		if (n == 1) {
			cout << 1 << '\n';
			
		}
		else {
			cout << arr[k][n - 1] << '\n';

		}
	}

	system("PAUSE");


	return 0;
}