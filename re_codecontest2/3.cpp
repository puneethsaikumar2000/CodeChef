#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<ll> vi;

#define pb push_back

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		vi v(n);
		map<int,vi> m;
		vi b;
		for (int i = 0; i < n; i++){
			cin>>v[i];

			m[v[i]].pb(i);
		}

		int ans = 0;
		int prev_ind = n;

		for (auto i : m){
			if (i.second.back() < prev_ind){
				ans++;
				prev_ind = i.second[0];
			}
			else
				prev_ind = *lower_bound(i.second.begin(), i.second.end(), prev_ind);
		}
		cout<< ans << endl;
	}
	return 0;
}