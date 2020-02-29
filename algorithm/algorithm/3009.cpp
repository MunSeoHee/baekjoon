#include<iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[3][2];

	for (int i = 0; i < 3; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	if(arr[0][0] == arr[1][0]){
		cout << arr[2][0];
	}
	else if (arr[1][0] == arr[2][0]) {
		cout << arr[0][0];
	}
	else if (arr[0][0] == arr[2][0]) {
		cout << arr[1][0];
	}
	cout << " ";
	if (arr[0][1] == arr[1][1]) {
		cout << arr[2][1];
	}
	else if (arr[1][1] == arr[2][1]) {
		cout << arr[0][1];
	}
	else if (arr[0][1] == arr[2][1]) {
		cout << arr[1][1];
	}
	system("PAUSE");


	return 0;
}