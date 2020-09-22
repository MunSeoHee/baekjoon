#include <iostream>
using namespace std;

int main() {
	int kg, divv;
	cin >> kg;
	divv = kg / 5;
	int cnt = 0;
	int temp = 0;
	while (divv >= 0) {
		
		if (divv > 0) {
			temp = kg - 5 * divv;
			cnt = divv;								
		}
		
		if (temp == 0) {
			cout << cnt;
			break;
		}
		else {
			temp = -3;
			if(temp!=0)
				divv--;
		}
		if (temp != 0) {
			cout << -1;
		}
		
	}

	return 0;

}