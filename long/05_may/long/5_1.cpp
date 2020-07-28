#include <bits/stdc++.h>
using namespace std;

int G[19][19];

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
		for (int i = 1; i < 19; ++i)
		{
			for (int j = 1; j < 19; ++j)
			{
				G[i][j] = 0;
			}
		}
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
			G[p[i].first][p[i].second] = 1;
			G[p[i].second][p[i].first] = 1;
		}
		// if (m == 0){
		// 	int swaps = min_swaps(v, n);
		// 	cout << swaps << endl;
		// }
		// else{
			int swaped = n;
			while(swaped != 0){
				swaped = 0;
				for (int i = 1; i <= n; ++i)
				{
					for (int j = i+1; j <= n; ++j)
					{
						// cout << "swaped: " << swaped << endl;
						// printf("%i %i %i\n", G[i][j], i, j);
						if (G[i][j] and v[i] > v[j]){
							int temp = v[i];
							v[i] = v[j];
							v[j] = temp;
							swaped += 1;
						}
					}
				}
			}
			int swaps = min_swaps(v, n);
			cout << swaps << endl;
		// }
	}
	return 0;
}