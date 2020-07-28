#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> v(n+1, 0);

		bool found = false;
		int ind = 0;
		for (int i = 1; i <= n; ++i)
		{
			cin >> v[i];
			if (!(found) and (v[i] != i)){
				found = true;
				ind = i;
			}
		}

		if (ind == 0){
			cout << 0 << endl;
			continue;
		}

		int cnt = 0;
		vector<int> v1;
		bool possible = true;
		vector<pair<int, pair<int, int>> > swappings;
		while (ind != 0){
			// cout << "pushing: " << ind << endl;
			v1.push_back(ind);

			int swaps = 1;
			int ind1 = ind;
			while (v[ind1] != ind){
				ind1 = v[ind1];
				swaps += 1;
				v1.push_back(ind1);
				// cout << "pushing: " << ind1 << endl;
			}
			// cout << "swaps: " << swaps << " " << v1.size() << endl;
			if (swaps >= 3 and (swaps-1)%2 == 0){
				cnt += ((swaps - 1) / 2);
				for (int i = 1; i < v1.size(); i += 2){
					swappings.push_back(make_pair(v1[0], make_pair(v1[i], v1[i+1])));
					// printf("pushing to swappings:: %i %i %i\n", v1[0], v1[i], v1[i+1]);	
				}
			}
			else{
				possible = false;
				break;
			}
			for (int i = 0; i < v1.size(); ++i)
			{
				v[v1[i]] = v1[i];
			}

			// for next loop
			ind = 0;
			// cout << "v::\n";
			for (int i = 1; i <= n; ++i){
				if (v[i] != i){
					ind = i;
					break;
				}
				// cout << v[i] << " ";
			}
			// cout<<endl;
		}
		if (!(possible)){
			cout << -1 << endl;
		}
		else{
			cout << swappings.size() << endl;
			for (int i = 0; i < swappings.size(); i++){
				printf("%i %i %i\n", swappings[i].first, swappings[i].second.first, swappings[i].second.second);
			}
		}
	}
	return 0;
}