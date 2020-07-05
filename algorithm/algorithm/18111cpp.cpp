#include<iostream>
#include <vector>
using namespace std;
int s=10000, h, b;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<vector<int>> vec;
	vector<int> vec2;
	int	n, m, temp, avg=0;
	cin >> n >> m >> b;
	int max = -1, min = 600, max_count, min_count;
	
	for (int x = 0; x < n; x++) {
		for (int i = 0; i < m; i++) {
			cin >> temp;
			vec2.push_back(temp);
			if (temp > max) {
				max = temp;
				max_count = 1;
			}
			else if(temp< min){
				min = temp;
				min_count = 1;
			}
			else if (temp == min) {
				min_count++;
			}
			else if (temp == max) {
				max_count++;
			}
			avg += temp;
		}
		vec.push_back(vec2);
		vec2.clear();
	}

	if (max == min) {
		s = 0;
		h = max;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//최소 높이에 맞춰보기
			if (vec[i][j] > min) {
				temp += (vec[i][j] - min) * 2;
			}
		}
	}
	if (temp < s) {
		s = temp;
		h = min;
	}
	else if (temp == s) {
		if (min > h) {
			s = temp;
			h = min;
		}
	}
	temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//최대 높이에 맞춰보기
			if (vec[i][j] < max) {
				if (b >= max - vec[i][j]) {
					temp = (max - vec[i][j]);
					b -= max - vec[i][j];
				}
				else {
					temp = s + 1;
					break;
				}
				
			}
		}
	}
	if (temp < s) {
		s = temp;
		h = max;
	}
	else if (s == temp) {
		if (max > h) {
			s = temp;
			h = max;
		}
	}temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//중간 높이에 맞춰보기
			if (vec[i][j] > int(avg/(n*m))) {
				temp += (vec[i][j] - int(avg / (n*m))) * 2;
			}
			else if (vec[i][j] < avg / (n*m)) {
				if (b >= int(avg / (n*m)) - vec[i][j]) {
					temp = (int(avg / (n*m)) - vec[i][j]);
					b -= int(avg / (n*m)) - vec[i][j];
				}
				else {
					temp = s + 1;
					break;
				}
			}
		}
	}
	if (temp < s) {
		s = temp;
		h = int(avg / (n*m));
	}
	else if (temp == s) {
		if (int(avg / (n*m)) > h) {
			s = temp;
			h = int(avg / (n*m));
		}
	}

	cout << s << " " << h;

	system("PAUSE");


	return 0;
}