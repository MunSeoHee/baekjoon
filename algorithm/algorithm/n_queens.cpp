#include <iostream>
#include<vector>
using namespace std;


vector<pair<int, int>> vec;
int row, col;
int queen[16]; //각 줄의 퀸을 저장
int N;
int cnt;
void backtrack(int x);

void main()
{
	int i, j;
	cin >> N;
	for (i = 0; i<N; i++) //0번째 줄에 하나씩 퀸을 놓아본다
	{
		col = i;
		queen[0] = i;
		backtrack(0);
	}

	printf("%d\n", cnt);
	system("PAUSE");
}

void backtrack(int x) //파라매터는 퀸을 놓을 좌표
{
	int i, j;
	//이자리에 퀸을 놓을 수 있는가?
	row = x;
	for (i = 0; i<x; i++){
		if ((queen[i] == queen[x]) || (abs(queen[i] - queen[x]) == abs(i - x))) {
			return;
		}
		
	}
	vec.push_back(make_pair(row, col));

	if (x == N - 1) {
		cnt++; //퀸을 다 놓은 경우
		for (int i = 0; i < vec.size(); i++) {
			cout << vec[i].first + 1<< " " << vec[i].second+1 << endl;
		}
		cout << endl;
		vec.clear();
		return;
	}

	for (i = 0; i<N; i++) //x+1번째 줄에 하나씩 퀸을 놓아본다
	{
		col = i;
		queen[x + 1] = i;
		backtrack(x + 1);
	}




	vec.clear();
}