#include<iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, int> hash1;
	string hash2[100001];

	int N, M;
	cin >> N >> M;
	string s;
	for (int i = 1; i <= N; i++) {
		cin >> s;
		hash1.insert(pair<string, int>(s,i));
		hash2[i] = s;
	}
	while (M--) {
		cin >> s;
		if (atoi(s.c_str())) {
			cout << hash2[atoi(s.c_str())]<<'\n';
		}
		else {
			cout << hash1[s] << '\n';
		}
	}
	system("PAUSE");


	return 0;
}