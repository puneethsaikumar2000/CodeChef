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
    	vi a(n), b(n);
    	map<int, pair<int, pii > > m; // first is total and second is pair of count in a, in b respectively.
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		// if (m.find(a[i]) == m.end())
    		// 	m[a[i]] = mk(0, mk(0, 0));
    		m[a[i]].ff += 1;
    		m[a[i]].ss.ff += 1;
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> b[i];
    		// if (m.find(b[i]) == m.end())
    		// 	m[b[i]] = mk(0, mk(0, 0));
    		m[b[i]].ff += 1;
    		m[b[i]].ss.ss += 1;
    	}
    	bool pos = true;
    	for (auto i : m){
    		// if (i.ss.ff != i.ss.ss.ff + i.ss.ss.ss) printf("not equal\n");
    		if (i.ss.ff % 2 == 1) pos = false;
    		if (not(pos)) break;
    	}
    	if (not(pos)){
    		cout << -1 << endl;
    		continue;
    	}
    	lli cost = 0, total = 0;
    	// map<int, int> transfer;
    	vector<int> transa, transb;
    	int min_elem = 0;
    	for (auto i : m){
    		if (min_elem == 0)
    			min_elem = i.ff;
    		pii p = i.ss.ss;
    		lli diff = abs(p.ff - p.ss);
    		// transfer[i.ff] = diff / 2;
    		total += diff / 2;
    		if (p.ff > p.ss){
	    		for (int k = 0; k < (diff / 2); k++){
	    			transa.pb(i.ff);
	    		}
    		}
    		else{
    			for (int k = 0; k < (diff / 2); k++){
	    			transb.pb(i.ff);
	    		}
    		}
    	}
    	if (transa.size() != transb.size()){
    		cout << -1 << endl;
    	}
    	else if (total == 0){
    		cout << 0 << endl;
    	}
    	else{
    		sort(transa.begin(), transa.end());
    		sort(transb.begin(), transb.end());
    		int i1 = 0, j1 = 0, i2 = transa.size() - 1, j2 = transb.size() - 1;
    		while(i1 <= i2 and j1 <= j2){
    			if (transa[i1] < transb[j1]){
    				cost += min(2*min_elem, transa[i1]);
    				i1 += 1;
    				j2 -= 1;
    			}
    			else{
    				cost += min(2*min_elem, transb[j1]);
    				j1 += 1;
    				i2 -= 1;
    			}
    		}
    		cout << cost << endl;
    	}
    }
    return 0;
}

