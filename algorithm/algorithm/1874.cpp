#include<iostream>
#include <stack>
#include <vector>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int num,n;
	vector<int> answer;
	stack<int> s;
	vector<char> a;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		answer.push_back(n);
	}
	n = 1;
	for (int i = 0; i < answer.size(); i++) {
		if (s.empty()) {
			if (n > answer[i]) {
				s.push(-1);
				break;
			}
			s.push(n++);
			a.push_back('+');
		}
		while (n <= answer[i] ){
			s.push(n++);
			a.push_back('+');
		}
		while (n > answer[i]) {
			if (s.top() <= answer[i]) {
				break;
			}
			else if(s.top()>answer[i]){
				s.pop();
				a.push_back('-');
			}
		}
		if (s.top() == answer[i]) {
			a.push_back('-');
			s.pop();
		}
	}
	if (s.empty()) {
		for (int i = 0; i < a.size(); i++) {
			cout << a[i] << '\n';
		}
	}
	else {
		cout << "NO";
	}
	
	system("PAUSE");


	return 0;
}