#include<iostream>
#include <string>
#include<vector>
#include <map>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	vector<string> vec;
	cin >> N >> M;
	string temp;
	map <string, int>m;
	while (N--) {
		cin >> temp;
		m.insert(make_pair(temp, 0));
	}
	while (M--) {
		cin >> temp;
		if (m.find(temp) != m.end()) {
			vec.push_back(m.find(temp)->first);
		}
	}
	sort(vec.begin(), vec.end());
	cout << vec.size() << '\n';
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}
	system("PAUSE");


	return 0;
}