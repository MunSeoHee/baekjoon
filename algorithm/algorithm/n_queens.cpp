#include <iostream>
#include<vector>
using namespace std;


vector<pair<int, int>> vec;
int row, col;
int queen[16]; //�� ���� ���� ����
int N;
int cnt;
void backtrack(int x);

void main()
{
	int i, j;
	cin >> N;
	for (i = 0; i<N; i++) //0��° �ٿ� �ϳ��� ���� ���ƺ���
	{
		col = i;
		queen[0] = i;
		backtrack(0);
	}

	printf("%d\n", cnt);
	system("PAUSE");
}

void backtrack(int x) //�Ķ���ʹ� ���� ���� ��ǥ
{
	int i, j;
	//���ڸ��� ���� ���� �� �ִ°�?
	row = x;
	for (i = 0; i<x; i++){
		if ((queen[i] == queen[x]) || (abs(queen[i] - queen[x]) == abs(i - x))) {
			return;
		}
		
	}
	vec.push_back(make_pair(row, col));

	if (x == N - 1) {
		cnt++; //���� �� ���� ���
		for (int i = 0; i < vec.size(); i++) {
			cout << vec[i].first + 1<< " " << vec[i].second+1 << endl;
		}
		cout << endl;
		vec.clear();
		return;
	}

	for (i = 0; i<N; i++) //x+1��° �ٿ� �ϳ��� ���� ���ƺ���
	{
		col = i;
		queen[x + 1] = i;
		backtrack(x + 1);
	}




	vec.clear();
}