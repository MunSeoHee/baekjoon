#include<iostream>
#include <string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

vector<int> num_arry;
vector<char> opt;


//opt Ÿ�Կ� �������
int cal(int data, int data2, char opt) {
	switch (opt)
	{
	case '+':
		return data + data2;
	case '-':
		return data - data2;

	case '*':
		return data * data2;
	}
}


//���� ��ġ , ���� ��  , �ִ� 
int output(int idx, int data, int n) {

	//con
	cout << "cur value : " << data << "id x: " << num_arry[idx] << endl;;
	if ((idx + 1) == (n - 1) / 2 + 1) {
		data = max(cal(num_arry[idx], data, opt[idx]), data);
		return data;
	}


	// ��ȣ�� �����Ѵٸ� ����� ���簪 
	if (idx + 3 < (n - 1) / 2 + 1) {

		output(idx + 3, cal(num_arry[idx], cal(num_arry[idx + 1], num_arry[idx + 2], opt[idx + 1]), opt[idx]), n);
	}
	else {
		//��ġ�� �ٷ� ����
		output(idx + 1, cal(num_arry[idx], num_arry[idx + 1], opt[idx]), n);

	}


}
int result = 0;
int main() {

	int n;
	char data;
	int max = 0;
	cin >> n;



	for (int i = 0; i < n; i++)
	{
		cin >> data;
		//0 issue
		if (i == 0) {

			num_arry.push_back(data - '0');
		}
		else if (i % 2 == 0) {
			opt.push_back(data);
		}
		else {
			num_arry.push_back(data - '0');
		}
	}


	max = output(0, max, n);

	cout << max;

	return 0;
}