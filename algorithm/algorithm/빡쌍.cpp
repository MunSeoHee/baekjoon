#include <stdio.h>

int check(char sentence[100])//check(Ȯ���� ����), return 1(��Ī�� ����) or 0(�ȴ�Ī�� ����) 
{
	int num[2][2] = { { 0,0 },{ 0,0 } }, index;
	/*
	num[0][0]�� ( ����
	num[0][1]�� ) ����

	num[1][0]�� [ ����
	num[1][1]�� ] ����

	index�� "Help( I[m being held prisoner in a fortune cookie factory)]."����ó�� ( ], [ )�� ��츦 ���� ���ؼ� ���� �ֱٿ� ���� ��ȣ�� ��ġ(index)�� ������ ����
	*/
	for (int i = 0;sentence[i] != '.';i++)//.�� ���� �� ���� �ݺ�. index ���� ������ i��� 
	{
		switch (sentence[i])//i�� �ε����� ������ ���� ���� switch�� 
		{
		case '(':
			index = i;//��ȣ ��ġ ����
			num[0][0] += 1;//���� ++ 
			break;

		case '[':
			index = i;//��ȣ ��ġ ����
			num[1][0] += 1;//���� ++ 
			break;

		case ')':
			num[0][1] += 1;//����++ 
			if ((num[0][0]<num[0][1]) || (sentence[index] == '['))//(�� �������� )�� ������ �������ų�(or), �ֱٿ� ���� ��ȣ�� [�� �� <-> [ ) ���ܻ��� 
				return 0;//0(��Ī�� �ƴϴ�)��ȯ 
			index = i;//��ȣ ��ġ ����
			break;

		case ']':
			num[1][1] += 1;//����++ 
			if ((num[1][0]<num[1][1]) || (sentence[index] == '('))//[�� �������� ]�� ������ �������ų�(or), �ֱٿ� ���� ��ȣ�� (�� �� <-> ( ] ���ܻ��� 
				return 0;//0(��Ī�� �ƴϴ�)��ȯ 
			index = i;//��ȣ ��ġ ����
			break;
		}

	}
	for (int i = 0;i<2;i++)//��� sentence�� ���� Ȯ���� ������ ���� 
	{
		if (num[i][0] != num[i][1])//(�� ), �׸��� [�� ]�� ������ �������� �ʴٸ� 
			return 0;//0(��Ī�� �ƴϴ�)��ȯ 
	}

	return 1;//���� ��� ���꿡�� 0�� ��ȯ(��Ī�� �ƴϴ�)���� �ʾҴٸ�, 1�� ��ȯ(��Ī�̴�) 
}

int main()
{
	char sentence[100];//�������� 
	while (1)//���� �� �Է� �����ϰ� �Է��ϰ� Ȯ���ϴ� ��ü ���� loof 
	{
		fgets(sentence, 100, stdin);//���� ���� 
		if (sentence[0] == '.')
			return 0;
		if (check(sentence) == 0)//check()�Լ��� ��ȯ���� 0�̸� no 
			printf("no\n");
		else//check()�Լ��� ��ȯ���� 1�̸� yes 
			printf("yes\n");
	}
	return 0;
}