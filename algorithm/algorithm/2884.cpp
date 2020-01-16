#include <stdio.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int h, m;

	scanf("%d %d", &h, &m);

	if (m < 45) {
		if (h == 0) {
			h = 23;
			m = m + 60 - 45;
			
		}
		else {
			h -= 1;
			m = m + 60 - 45;
		}
	}
	else {
		m -= 45;
	}

	printf("%d %d", h, m);
	system("pause");
	return 0;
}