#include<stdio.h>
int main() {
	//Ȧ�� �� ������
	//¦�� �� �������
	//���� Ȧ���� ¦��ĭ,¦���� Ȧ��ĭ
	//�� Ȧ���� Ȧ��, ¥���� ¦��
	char n[8];
	char k[8];
	int q = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			scanf_s("%c", &n[j]);//Ȧ�� ��
			scanf_s("%c", &k[j]);//¦�� ��
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