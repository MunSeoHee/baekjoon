#include<iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M,result=0, num=0;
	string S;
	cin >> N >> M ;

	cin >> S;

	
	for (int i = 0; i < M - 2; i++) {
		if (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I') {
			num++;
			if (num == N) {
				result++;
				num--;
			}
			i++;
		}
		else {
			num = 0;
		}
	}
	cout << result;
	
	system("PAUSE");


	return 0;
}