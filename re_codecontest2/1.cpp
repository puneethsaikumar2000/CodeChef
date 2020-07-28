#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		map<int,int> m, m1;
		for (int i = 0; i < n; ++i){
			cin>>a[i];
			m[a[i]] = 0;
		}

		vector<int> b;

		int max_cnt = 0;
		for (auto it : m){
			int k = it.first;
			int cnt = 0;
			int prev = -1;
			// printf("%i : %i\n", it.first, it.second);
			for (int i = 0; i < n; ++i){
				if (prev == -1){
					if (a[i] == k){
						cnt++;
						prev = i;
						continue;
					}
				}

				if (a[i] == k and prev != i-1){
					cnt++;
					prev = i;
				}
			}
			m1[k] = cnt;
			// printf("%i : %i\n", k, cnt);
			b.push_back(k);
			max_cnt = max(max_cnt, cnt);
		}

		sort(b.begin(), b.end());
		for (int j = 0; j < b.size(); j++){
			if (m1[b[j]] == max_cnt){
				cout<<b[j]<<endl;
				break;
			}
		}
	}
	return 0;
}