#include<iostream>
#include <string>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int v1, v2;
	string num1, num2, result;
	cin >> num1 >> num2;
	int max = 0, temp=0, min;

	if (num1.length() > num2.length()) {
		max = num1.length();
		min = num2.length();
		for (int i = 0; i <max-min; i++) {
			num2 = "0" + num2;
		}
	}
	
	else {
		max = num2.length();
		min = num1.length();
		for (int i = 0; i < max - min; i++) {
			num1 = "0" + num1;
		}
	}
	
	for (int i = max-1; i >=0; i--) {
		
		v2 = num2[i] - 48;
		v1 = num1[i] - 48;
		
		if (v1+v2 + temp >= 10) {
			
			result.append(to_string(v1 + v2 + temp - 10));
			temp = 1;
		}
		else {
			result.append(to_string(v1 + v2 + temp));
			
			temp = 0;
		}
	}
	if (temp == 1) {
		result.append("1");
	}


	for (int i = result.length()-1; i >= 0; i--) {
		cout << result[i];
	}
	system("PAUSE");


	return 0;
}