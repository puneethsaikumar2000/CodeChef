#include <bits/stdc++.h>
using namespace std;

int G[25][25];

void DFS(vector<string> &v, int i, vector<vector<int> > &paths, vector<int> &visited){
	vector<vector<int> > new_paths;
	// visited[i] = 1;
	for (int j = 0; j < v.size(); ++j)
	{
		if (G[i][j] and not(visited[j])){
			for (auto it = paths.begin(); it != paths.end(); ++it)
			{
				vector<int> v2((*it));
				v2.push_back(j);
				new_paths.push_back(v2);
			}
		}
	}
	if (new_paths.size() != 0)
		paths = new_paths;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			G[i][j] = 0;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> G[i][j];
		}
	}
	vector<int> visited(n, 0);
	vector<vector<int> > paths;
	vector<int> v0;
	v0.push_back(0);
	paths.push_back(v0);
	for (int i = 0; i < n; ++i)
	{
		DFS(v, i, paths, visited);
		visited[i] = 1;
	}
	// cout << "paths\n";
	vector<string> vs;
	for (auto it = paths.begin(); it != paths.end(); ++it)
	{
		for (auto itr = (*it).begin(); itr != (*it).end(); ++itr)
		{
			cout << (*itr) << " ";
		}
		cout << endl;
	}
	return 0;
}