#include<iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num, n, m, temp, max=0;
	cin >> num;
	vector<int> q;
	while (num--)
	{
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			q.push_back(temp);
			if (temp > max) {
				max = temp;
			}
		}
		
		while (true)
		{
			if (q[m] == max) {

			}
		}
	}

	system("PAUSE");


	return 0;
}