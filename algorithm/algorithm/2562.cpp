#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num,count=0;
	int max=-1;
	for (int i = 0; i < 9; i++) {
		scanf(" %d", &num);
		if (num > max) {
			max = num;
			count = i+1;
		}
	}
	printf("%d\n%d", max, count);
	system("pause");
	return 0;
}