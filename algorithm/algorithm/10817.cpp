#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b) {
		if (a <= c) {
			printf("%d", a);
		}
		else {
			if (b > c) {
				printf("%d", b);
			}
			else {
				printf("%d", c);
			}
		}
	}
	else if (a <= b) {
		if (b <= c) {
			printf("%d", b);
		}
		else {
			if (a > c) {
				printf("%d", a);
			}
			else {
				printf("%d", c);
			}
		}
	}
	system("pause");
	return 0;
}