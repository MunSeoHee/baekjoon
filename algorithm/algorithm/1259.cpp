#include<iostream>
#include<string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string temp;
	bool flag;
	while (true)
	{
		cin >> temp;
		if (temp == "0") {
			break;
		}
		else {
			for (int i = 0; i < temp.size(); i++) {
				if (temp[i] != temp[temp.size() - i -1]) {
					flag = false;
					break;
				}
				else {
					flag = true;
				}
			}
			if (flag) {
				cout << "yes" << '\n';
			}
			else {
				cout << "no" << '\n';
			}
			
		}
	}


	system("PAUSE");


	return 0;
}