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
    	// twice the number of cures that were delivered (i.e. people that were cured)
    	int n, x;
    	cin >> n >> x;
    	vi v(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    	}
    	sort(v.begin(), v.end());
    	int lb = -1;
		for (int i = 0; i < n; ++i)
		{
			if (v[i] >= x){
				lb = i;
				break;
			}
		}
    	if (lb == -1){
    		cout << n << endl;
    		continue;
    	}
    	int days = 0;
    	for (int i = lb; i < n; ++i)
    	{
    		if (x < v[i])
    		{
    			while(x < v[i])
    			{
    				x = 2*x;
    				days += 1;
    			}
    			days += 1;
    		}
    		else
    			days += 1;
    		x = 2*v[i];
    		// printf("first:: i: %i  x: %i  d: %i\n", i, x, d);
    	}
    	int tot = lb + days;
    	if (lb != 0){
    		days = 0;
    		lb -= 1;
    		for (int i = lb; i < n; ++i)
    		{
	    		if (x < v[i])
	    		{
	    			while(x < v[i])
	    			{
	    				x = 2*x;
	    				days += 1;
	    			}
	    			days += 1;
	    		}
	    		else
	    			days += 1;
	    		x = 2*v[i];
	    		// printf("sec:: i: %i  x: %i  d: %i\n", i, x, d);
    		}
    		int ans = min(tot, days+lb);
    		cout << ans << endl;
    	}
    	else
    		cout << tot << endl;
    }
    return 0;
}
