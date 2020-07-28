#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vi v(n);
    	map<int, int> m;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    		m[v[i]] = i;
    	}
    	int q;
    	cin >> q;
    	while(q--){
    		int x, y;
    		cin >> x >> y;
    		if (m[x + y] != 0 or x + y == v[0]){
    			cout << -1 << endl;
    			continue;
    		}
    		int j = upper_bound(v.begin(), v.end(), x + y) - v.begin();
    		// if (j == n)
    		// 	cout << n << endl;
    		cout << j << endl;
    	}
    }
    return 0;
}

