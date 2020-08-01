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
	
	//움직일 원판
	for (int i = 0; i < 3; i++) {
		
		if (s[i].empty()) {
			continue;
		}
		//어디에 둘 지
		for (int j = 0; j < 3; j++) {
			//동일한 곳 제외, 현재 원판보다 큰 원판이 있거나 비어있는 곳에 
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