#include<stdio.h>
int main() {
	//�汝� 還 �繵侒繵�
	//礎熱 還 匐�繵侒�
	//匐薑 �汝鶬� 礎熱蘊,礎熱還 �汝鶭�
	//�� �汝鶬� �汝�, 瞼熱還 礎熱
	char n[8];
	char k[8];
	int q = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			scanf_s("%c", &n[j]);//�汝� 還
			scanf_s("%c", &k[j]);//礎熱 還
			if (j % 2 == 0)
			{
				if (n[j] == 'F')
					q = q + 1;

			}
			else if (j % 2 != 0)
			{
				if (k[j] == 'F')
					q = q + 1;

			}

		}

	}
	printf("%d", q);
	return 0;
}