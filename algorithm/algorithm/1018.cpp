#include<iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> white = {{ "WBWBWBWB" },{ "BWBWBWBW" },{ "WBWBWBWB" },{ "BWBWBWBW" },{ "WBWBWBWB" },{ "BWBWBWBW" },{ "WBWBWBWB" },{ "BWBWBWBW" }};
vector<string> black = { { "BWBWBWBW" },{ "WBWBWBWB" },{ "BWBWBWBW" },{ "WBWBWBWB" },{ "BWBWBWBW" },{ "WBWBWBWB" },{ "BWBWBWBW" },{ "WBWBWBWB" } };
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<string> vec;
	string temp;

	int n, m;
	int w=0, b=0, result=100;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			for (int x = i; x < i + 8; x++) {
				for (int y = j; y < j + 8; y++) {
					if (vec[x][y] != white[x - i][y - j]) {
						w++;
					}
				}
			}
			for (int x = i; x < i + 8; x++) {
				for (int y = j; y < j + 8; y++) {
					if (vec[x][y] != black[x - i][y - j]) {
						b++;
					}
				}
			}
			if (w > b) {
				if (b < result) {
					result = b;
				}
			}
			else {
				if (w < result) {
					result = w;
				}
			}
			w = 0;
			b = 0;
		}
	}
	cout << result;
	
	
	system("PAUSE");


	return 0;
}