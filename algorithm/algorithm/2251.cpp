#include<iostream>
#include <string>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int visit[201][201][201];
int A, B, C;
vector<int>result;
void bfs() {
	queue<pair<pair<int, int>,int>> q;
	q.push(make_pair(make_pair(0,0),C));
	int na, nb, nc;

	while (!q.empty()) {
		na = q.front().first.first;
		nb = q.front().first.second;
		nc = q.front().second;

		q.pop();
		if (visit[na][nb][nc]) continue;
		visit[na][nb][nc] = true;
		if (na == 0) result.push_back(nc);

		//a->b
		if (na + nb > B) {
			q.push(make_pair(make_pair(na + nb - B, B), nc));
		}
		else {
			q.push(make_pair(make_pair(0, na + nb), nc));
		}
		//b->a
		if (na + nb > A) {
			q.push(make_pair(make_pair(A, na + nb - A), nc));
		}
		else {
			q.push(make_pair(make_pair(na + nb, 0), nc));
		}
		//c->b
		if (nc + nb > B) {
			q.push(make_pair(make_pair(na, B), nc + nb - B));
		}
		else {
			q.push(make_pair(make_pair(na, nc + nb), 0));
		}
		//b->c
		if (nc + nb > C) {
			q.push(make_pair(make_pair(na, nc + nb - C), C));
		}
		else {
			q.push(make_pair(make_pair(na, 0), nc + nb));
		}
		//a->c
		if (na + nc > C) {
			q.push(make_pair(make_pair(na + nc - C, nb), C));
		}
		else {
			q.push(make_pair(make_pair(0, nb), na + nc));
		}
		//c->a
		if (na + nc > A) {
			q.push(make_pair(make_pair(A, nb), na + nc - A));
		}
		else {
			q.push(make_pair(make_pair(na + nc, nb), 0));
		}
		
	}

}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> A >> B >> C;

	bfs();
	sort(result.begin(), result.end());
	for (int i = 0; i < result.size();i++) {
		cout << result[i] << " ";
	}
	system("PAUSE");


	return 0;
}