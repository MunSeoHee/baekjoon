#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<float>vec;
	float num,n,avg=0;
	float temp,count=0;
	cin >> n;
	while (n--) {
		cin >> num;
		for (int i = 0; i < num;i++) {
			cin >> temp;
			vec.push_back(temp);
			avg = avg + temp;
		}
		for (int i = 0; i < num; i++) {
			if (vec[i] > avg / num) {
				count++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << count / num * 100 << "%" << "\n";
		avg = 0;
		count = 0;
		vec.clear();
	}
	system("PAUSE");


	return 0;
}