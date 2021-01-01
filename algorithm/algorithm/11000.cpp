#include<iostream>
#include <string>
#include <queue>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
class cmp
{
public:
	bool operator()(pair<int, int> pq1, pair<int, int> pq2)
	{
		if (pq1.first == pq2.first)
		{
			// priority_queue는 오른쪽이 기준이기 때문에 second 오름차순 정렬 
			return pq1.second > pq2.second;
		}
		else
		{
			// priority_queue는 오른쪽이 기준이기 때문에 first 오름차순 정렬     
			return pq1.first > pq2.first;
		}
	}
};
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
	priority_queue<int, vector<int>, greater<int>> p;


	int N,s,t;
	cin >> N;
	while (N--) {
		cin >> s >> t;
		pq.push(make_pair(s, t));
	}
	bool flag = true;
	p.push(pq.top().second);
	pq.pop();
	while (!pq.empty()) {
		if (p.top() <= pq.top().first) {
			p.pop();
			p.push(pq.top().second);
			pq.pop();
		}
		else {
			p.push(pq.top().second);
			pq.pop();
		}
	}
	cout << p.size();
	system("PAUSE");


	return 0;
}