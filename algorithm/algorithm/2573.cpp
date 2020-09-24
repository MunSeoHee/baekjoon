#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
int route[][2] = { {-1,0},{0,-1},{0,1},{1,0} };
using namespace std;
vector<string>vec;

void year() {
	for (int i = 1; i < vec.size() - 1; i++) {
		for (int j = 1; j < vec[i].size() - 1; j++) {
			for (int z = 0;z < 4;z++) {

			}
		}
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	

	int N, M;
	cin >> N >> M;

	while (N--)
	{
		getline(cin, str);
		str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
		vec.push_back(str);
	}
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i]<<endl;
	}


	system("PAUSE");


	return 0;
}