#include <stdio.h>

int check(char sentence[100])//check(확인할 문장), return 1(대칭인 문장) or 0(안대칭인 문장) 
{
	int num[2][2] = { { 0,0 },{ 0,0 } }, index;
	/*
	num[0][0]은 ( 개수
	num[0][1]은 ) 개수

	num[1][0]은 [ 개수
	num[1][1]은 ] 개수

	index는 "Help( I[m being held prisoner in a fortune cookie factory)]."에서처럼 ( ], [ )의 경우를 막기 위해서 가장 최근에 읽은 괄호의 위치(index)를 저장할 변수
	*/
	for (int i = 0;sentence[i] != '.';i++)//.가 나올 때 까지 반복. index 접근 변수는 i사용 
	{
		switch (sentence[i])//i의 인덱스를 가지는 값에 대한 switch문 
		{
		case '(':
			index = i;//괄호 위치 저장
			num[0][0] += 1;//개수 ++ 
			break;

		case '[':
			index = i;//괄호 위치 저장
			num[1][0] += 1;//개수 ++ 
			break;

		case ')':
			num[0][1] += 1;//개수++ 
			if ((num[0][0]<num[0][1]) || (sentence[index] == '['))//(의 개수보다 )의 개수가 많아지거나(or), 최근에 나온 괄호가 [일 때 <-> [ ) 예외사항 
				return 0;//0(대칭이 아니다)반환 
			index = i;//괄호 위치 저장
			break;

		case ']':
			num[1][1] += 1;//개수++ 
			if ((num[1][0]<num[1][1]) || (sentence[index] == '('))//[의 개수보다 ]의 개수가 많아지거나(or), 최근에 나온 괄호가 (일 때 <-> ( ] 예외사항 
				return 0;//0(대칭이 아니다)반환 
			index = i;//괄호 위치 저장
			break;
		}

	}
	for (int i = 0;i<2;i++)//모든 sentence의 값을 확인후 마지막 점검 
	{
		if (num[i][0] != num[i][1])//(과 ), 그리고 [과 ]의 개수가 동일하지 않다면 
			return 0;//0(대칭이 아니다)반환 
	}

	return 1;//위의 모든 연산에서 0을 반환(대칭이 아니다)하지 않았다면, 1을 반환(대칭이다) 
}

int main()
{
	char sentence[100];//문장저장 
	while (1)//여러 줄 입력 가능하게 입력하고 확인하는 전체 과정 loof 
	{
		fgets(sentence, 100, stdin);//문장 저장 
		if (sentence[0] == '.')
			return 0;
		if (check(sentence) == 0)//check()함수의 반환값이 0이면 no 
			printf("no\n");
		else//check()함수의 반환값이 1이면 yes 
			printf("yes\n");
	}
	return 0;
}