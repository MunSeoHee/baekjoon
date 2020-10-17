#include<iostream>
#include <string>
#include <map>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	string temp;
	map <string, int>m;
	while (N--) {
		cin >> temp;
		m.insert(make_pair(temp, 0));
	}
	while (M--) {
		cin >> temp;
		if (m.find(temp)->second == 0) {
			cout << m.find(temp)->first << '\n';
		}
	}

	system("PAUSE");


	return 0;
}