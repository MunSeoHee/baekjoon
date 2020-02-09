#include<iostream>
#include <string>
#include <vector>
using namespace std;
int num = 0;

void add(int x) {
	int n = 1;
	n <<= x;
	num |= n;
}

void remove(int x) {
	int n = 1;
	n <<= x;
	num = num & ~n;
}

void check(int x) {
	int n = 1;
	n = n << x;
	if (n == (num&n)) {
		cout << 1 << '\n';
	}
	else {
		cout << 0 << '\n';
	}
}

void toggle(int x) {
	int n = 1;
	n = n << x;
	if (n == (num&n)) {
		remove(x);
	}
	else {
		add(x);
	}
}

void all() {
	num = 0;
	num = ~num;
}

void empty() {
	num = 0;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int case_count;
	
	string acc;
	int n;

	cin >> case_count;
	for (int i = 0; i < case_count; i++) {
		cin >> acc >> n;
		cin.clear();
		
		switch (acc[1])
		{
		case 'd':
			add(n);
			break;
		case 'e':
			remove(n);
			break;
		case 'h':
			check(n);
			break;
		case 'o':
			toggle(n);
			break;
		case 'l':
			all();
			break;
		case 'm':
			empty();
			break;

		default:
			break;
		}
	}

	
	system("PAUSE");


	return 0;
}