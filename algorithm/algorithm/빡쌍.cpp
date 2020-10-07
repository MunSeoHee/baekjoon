#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[10] = { 0 };
	int b, x, cnt = 0, imsi[10] = { 0 };

	scanf_s("%d %d", &b, &x);
	for (int i = 0; i < b; i++)
		scanf_s("%d", &a[i]);

	if (b >= 1 && x <= 10000)
	{
		for (int j = 0; j < b; j++)
		{
			if (a[j] < x) {
				imsi[j] = a[j];
				printf("%d ", imsi[j]);
			}
		}
	}
}