#include<stdio.h>
int main() {
	//È¦¼ö ÁÙ Èò°ËÈò°Ë
	//Â¦¼ö ÁÙ °ËÈò°ËÈò
	//°ËÁ¤ È¦¼öÁÙ Â¦¼öÄ­,Â¦¼öÁÙ È¦¼öÄ­
	//Èò È¦¼öÁÙ È¦¼ö, Â¥¼öÁÙ Â¦¼ö
	char n[8];
	char k[8];
	int q = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			scanf_s("%c", &n[j]);//È¦¼ö ÁÙ
			scanf_s("%c", &k[j]);//Â¦¼ö ÁÙ
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