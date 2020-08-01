#include<iostream>
#include <string>
#include <stack>
using namespace std;
stack<int> s [3];

int Hanoi(stack<int> s[3], int start, int goal, int k) {
	if (s[0].empty() && s[1].empty()) {
		return k;
	}
	if (start != -1 && goal != -1) {
		s[goal].push(s[start].top());
		s[start].pop();
	}
	
	//������ ����
	for (int i = 0; i < 3; i++) {
		
		if (s[i].empty()) {
			continue;
		}
		//��� �� ��
		for (int j = 0; j < 3; j++) {
			//������ �� ����, ���� ���Ǻ��� ū ������ �ְų� ����ִ� ���� 
			if (goal != i || start != j) {
				if (i != j && s[j].empty()) {
					return Hanoi(s, i, j, k++);
				}
				if (i != j && !s[j].empty() && s[j].top() > s[i].top()) {
					return Hanoi(s, i, j, k++);
				}
			}
			
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	while (N--) {
		s[0].push(N+1);
	}
	cout<<Hanoi(s, -1, -1, 0);


	system("PAUSE");


	return 0;
}