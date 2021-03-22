#include<iostream>
#include <queue>
#include <functional>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<int, vector<int>, greater<int>>g_pq; //오름차순
	priority_queue<int, vector<int>, less<int>>l_pq; //내림차순
	int T, k, n, cnt;
	char c;
	cin >> T;
	while (T--) {
		cin >> k;
		cnt = k;
		while (k--) {
			cin >> c >> n;
			switch (c)
			{
			case 'I':
				g_pq.push(n);
				l_pq.push(n);
				cnt++;
				break;
			case 'D':
				if (n == -1) {
					if (!g_pq.empty()) {
						g_pq.pop();
						cnt--;
					}
				}
				else {
					if (!l_pq.empty()) {
						l_pq.pop();
						cnt--;
					}
					
				}
				break;
			default:
				break;
			}
		}
		if (cnt==0) {
			cout << "EMPTY\n";
		}
		else {
			cout << cnt << endl;
			
			cout << l_pq.top() << " " << g_pq.top()<<'\n';
		}
	}
	system("PAUSE");


	return 0;
}