#include<iostream>
#include <string>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	float count,temp,max=0,sum=0;
	vector<float> score;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cin >> temp;
		score.push_back(temp);
		if (max < temp) {
			max = temp;
		}
	}
	for (int i = 0; i < count; i++) {
		sum = sum + (score[i] / max) * 100;
	}
	cout << sum / count;

	system("PAUSE");


	return 0;
}