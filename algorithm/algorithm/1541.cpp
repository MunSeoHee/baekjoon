#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	string temp;
	vector<string>vec;

	//문자와 숫자 분리
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+' || s[i] == '-') {
			vec.push_back(temp);
			temp = s[i];
			vec.push_back(temp);
			temp = "";
		}
		else {
			temp += s[i];
		}
	}
	vec.push_back(temp);
	
	int t=0,sum=0;

	bool flag=false;

	for (int i = 0; i < vec.size(); i++) {
		//뺄셈 이후에 나오는 것들에 대한 처리
		if (flag) {
			if (vec[i] == "+") {
				continue;
			}
			//뺄셈이 또 나오면 sum에다가 지금까지의 임시t를 빼주고 t 초기화
			else if (vec[i] == "-") {
				sum = sum - t;
				t = 0;
			}
			//뺄셈 뒤에 나오는 것들을 전부 임시t에 저장해둠
			else {
				t += atoi(vec[i].c_str());
			}
		}
		//뺄셈 나오기 이전에 대한 것들에 처리
		else {
			//sum에다가 값들을 전부 더해줌
			if (vec[i] == "+") {
				sum += atoi(vec[i].c_str());
			}
			//뺄셈이 나오면 플래그를 바꾸어줌
			else if (vec[i] == "-") {
				flag = true;
			}
			else {
				sum += atoi(vec[i].c_str());
			}

		}
	}
	//합계에다가 빼기 이후에 나왔던 것들을 전부 저장해둔 t를 빼준다
	cout << sum - t;
	
	system("PAUSE");


	return 0;
}