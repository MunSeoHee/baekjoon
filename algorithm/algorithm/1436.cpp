#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num = 666, n, temp=0;
	cin >> n;
	
	while (true)
	{
		if (to_string(num).find("666")!=-1) {
			temp++;
			if (temp == n) {
				break;
			}
		}
		num++;
	}
	cout << num;
	system("PAUSE");


	return 0;
}