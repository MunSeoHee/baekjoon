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

	//���ڿ� ���� �и�
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
		//���� ���Ŀ� ������ �͵鿡 ���� ó��
		if (flag) {
			if (vec[i] == "+") {
				continue;
			}
			//������ �� ������ sum���ٰ� ���ݱ����� �ӽ�t�� ���ְ� t �ʱ�ȭ
			else if (vec[i] == "-") {
				sum = sum - t;
				t = 0;
			}
			//���� �ڿ� ������ �͵��� ���� �ӽ�t�� �����ص�
			else {
				t += atoi(vec[i].c_str());
			}
		}
		//���� ������ ������ ���� �͵鿡 ó��
		else {
			//sum���ٰ� ������ ���� ������
			if (vec[i] == "+") {
				sum += atoi(vec[i].c_str());
			}
			//������ ������ �÷��׸� �ٲپ���
			else if (vec[i] == "-") {
				flag = true;
			}
			else {
				sum += atoi(vec[i].c_str());
			}

		}
	}
	//�հ迡�ٰ� ���� ���Ŀ� ���Դ� �͵��� ���� �����ص� t�� ���ش�
	cout << sum - t;
	
	system("PAUSE");


	return 0;
}