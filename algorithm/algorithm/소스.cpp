#include <stdio.h>
#include<iostream>
int main()
{
	int num = 0;	
	int temp = 0;
	int score = 0;
	int finalscore = 0;

	scanf("%d", &num);

	for (int i = 0;i<num;i++)
	{
		while (1)
		{
			temp = getchar();
			if (temp == 'O')
			{
				score++;
				finalscore += score;
			}
			else if (temp == 'X')
			{
				score = 0;
			}

			else if (temp == '\n')
			{
				break;
			}

		}
		printf("%d\n", finalscore);
		finalscore = 0;

	}
	system("PAUSE");
	return 0;
}