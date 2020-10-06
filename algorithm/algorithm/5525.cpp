#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M,result=0;
	string S;
	cin >> N >> M >> S;
	string str = "I";
	bool flag = true;

	for (int i = 0; i < S.size()-(1+2*N);i++) {
		if (S[i] == 'I') {
			for (int j = i + 1; j < i + 2 * N; j+2) {
				if (S[j] != 'O') {
					flag = false;
					break;
				}
			}
			if (flag) {
				for (int j = i + 2; j < i + 2 * N; j + 2) {
					if (S[j] != 'I') {
						flag = false;
						break;
					}
				}
			}
			if (flag) {
				result++;
			}
		}
		flag = true;
	}
	cout << result;
	system("PAUSE");


	return 0;
}