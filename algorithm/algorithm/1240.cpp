#include<iostream>
#include<queue>
#include <vector>
using namespace std;
vector<pair<int, int> > tree[1001];
int Distance[1001][1001];
int Visited[1001];
void dfs(int start, int k, int len) {
	Distance[start][k] = len;
	int size = tree[k].size();
	for (int i = 0; i < size; i++) {
		int route = tree[k][i].first;
		int cost = tree[k][i].second;
		if (!Visited[route])
		{
			Visited[route] = 1;
			dfs(start, route, len + cost);
			Visited[route] = 0;
		}
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, a,b,len;
	cin >> N >> M;
	for (int i = 0; i < N - 1; i++) {
		cin >> a >> b >> len;
		tree[a].push_back({ b,len });
		tree[b].push_back({ a,len });
	}
	for (int i = 1; i <= N; ++i)
	{
		Visited[i] = 1;
		dfs(i, i, 0);
		Visited[i] = 0;
	}
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		cout << Distance[a][b]<<'\n';
	}
	system("PAUSE");


	return 0;
}