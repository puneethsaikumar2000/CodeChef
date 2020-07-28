#include <bits/stdc++.h>
using namespace std;

// vector<vector<int> > G(19);

void DFS(int i, vector<int> &visited, vector<vector<int> > &G){
	visited[i] = true;
	for (auto it = G[i].begin(); it != G[i].end(); ++it)
	{
		if (!(visited[(*it)])){
			DFS((*it), visited, G);
		}
	}
	return ;
}

int min_swaps(vector<int> v, int n){
	int ind = 0;
	for (int i = 1; i <= n; ++i){
		if (v[i] != i){
			ind = i;
			break;
		}
	}
	vector<int> v1;
	int swaps = 0;
	while (ind != 0){
		v1.push_back(ind);

		int ind1 = ind;
		while(v[ind1] != ind){
			ind1 = v[ind1];
			v1.push_back(ind1);
			// cout << "pushing: " << ind1 << endl;
		}
		// cout << "size v1 : " << v1.size() << endl;
		swaps += v1.size()-1;

		for (int i = 0; i < v1.size(); ++i){
			v[v1[i]] = v1[i];
			// cout << v1[i] << " index " << v[v1[i]] << endl;
		}

		// for next loop
		ind = 0;
		// cout << "v :: \n";
		for (int i = 1; i <= n; ++i){
			// cout << v[i] << " ";
			if (v[i] != i){
				ind = i;
				break;
			}
		}
		// cout<<endl;
		v1.clear();
	}
	// cout << swaps << endl;
	return swaps;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		vector<vector<int> > G(19);
		int n, m;
		cin >> n >> m;
		vector<int> v(n+1);
		v[0] = 0;
		for (int i = 1; i <= n; ++i){
			cin >> v[i];
		}
		vector<pair<int, int> > p(m);
		for (int i = 0; i < m; ++i){
			cin >> p[i].first >> p[i].second;
			G[p[i].first].push_back(p[i].second);
			G[p[i].second].push_back(p[i].first);
		}
		if (m == 0){
			int swaps = min_swaps(v, n);
			cout << swaps << endl;
		}
		else{
			vector<int> all_visited(n+1, false);
			vector<vector<int> > grps;
			// cout << "G :: \n";
			// for (int it = 1; it <= n; ++it)
			// {
			// 	cout << it << " -> ";
			// 	for (auto itr = G[it].begin(); itr != G[it].end(); ++itr)
			// 	{
			// 		cout << (*itr) << " ";
			// 	}
			// 	cout << endl;
			// }
			for (int i = 1; i <= n; ++i){
				if (all_visited[i]){
					continue;
				}
				vector<int> visited(n+1, false);
				// cout << "running\n DFS of i : " << i << endl;
				DFS(i, visited, G);
				// cout << "running\n visited :: \n";
				// for (int itr1 = 1; itr1 <= n; ++itr1)
				// {
				// 	cout << itr1  << " " << visited[itr1] << " ,";
				// }
				// cout << endl;
				vector<int> v1;
				// cout << "defined v1\n";
				// cout << "pushed into grps\n updating all_visited:\n";
				for (int j = 1; j <= n; ++j)
				{
					// printf("j: %i  visited[j]: %i\n", j, visited[j]);
					if (visited[j]){
						all_visited[j] = true;
						v1.push_back(j);
					}
				}
				grps.push_back(v1);
			}
			vector<int> new_v(n+1, 0);
			// cout << "grps: " << endl;
			for (auto i = grps.begin(); i != grps.end(); ++i)
			{
				vector<int> a;
				for (int j = 0; j < (*i).size(); ++j)
				{
					a.push_back(v[(*i)[j]]);
				}
				sort(a.begin(), a.end());
				// cout << "a: \n";
				// for (int j = 0; j < a.size(); ++j)
				// {
				// 	cout << a[j] << " ";
				// }
				// cout << endl;

				for (int j = 0; j < (*i).size(); ++j)
				{
					// (*i)[j] is postion
					auto it1 = find(a.begin(), a.end(), (*i)[j]);
					if (it1 != a.end()){
						new_v[(*i)[j]] = (*i)[j];
						a.erase(it1);
					}
				}
				// cout << "a: \n";
				// for (int j = 0; j < a.size(); ++j)
				// {
				// 	cout << a[j] << " ";
				// }
				// cout << endl;
				int k = 0;
				for (int j = 0; j < (*i).size() and k < a.size(); ++j)
				{
					if (new_v[(*i)[j]] == 0){
						new_v[(*i)[j]] = 0;
						k++;
					}
				}
				// cout << "new_v : \n";
				// for (auto i1 = new_v.begin(); i1 != new_v.end(); ++i1)
				// {
				// 	cout << (*i1) << " ";
				// }
				// cout << endl;
			}
			// int swaps = min_swaps(new_v, n);
			// cout << swaps << endl;
			int cnt = 0;
			for (int j = 1; j <= n; ++j)
			{
				if (new_v[j] == 0){
					cnt += 1;
				}
			}
			// cout << "cnt: " << cnt << endl;
			int swaps = (cnt + 1) / 2;
			cout << swaps << endl;
		}
	}
	return 0;
}