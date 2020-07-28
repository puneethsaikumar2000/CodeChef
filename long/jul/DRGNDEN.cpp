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

int maxSumDS(vi arr, int n, vi a, vi h, int peak1)
{
    int i, j, max = 0;
    int MSDS1[n];

    // Initialize msds values
    // for all indexes
    for (i = 0; i < n; i++)
        MSDS1[i] = a[i + peak1];

    // Compute maximum sum values
    // in bottom up manner
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (h[i + peak1] <= h[j + peak1] && MSDS1[i] <= MSDS1[j] + a[i + peak1])
                MSDS1[i] = MSDS1[j] + a[i + peak1];

    // Pick maximum of all msds values
    for (i = 0; i < n; i++)
        if (max < MSDS1[i])
            max = MSDS1[i];

    return max;
}

int main(int argc, char const *argv[])
{
    fastio;
    int n, q;
    cin >> n >> q;
    vi h(n), a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> h[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    while(q--){
    	int t;
    	cin >> t;
    	if (t == 1){
    		int b, tastiness;
    		cin >> b >> tastiness;
    		a[b - 1] = tastiness;
    	}
    	else if (t == 2){
    		int peak1, peak2;
    		cin >> peak1 >> peak2;
    		peak2--; peak1--;
    		lli tastiness = 0;
    		bool pos = true;
    		vi MSDS;
    		if (peak1 < peak2){
    			for (int i = peak1 + 1; i <= peak2; ++i)
	    		{
	    			if (h[i] > h[peak1]) pos = false;
	    			MSDS.pb(i);
	    		}
    		}
    		else{
    			for (int i = peak1 + 1; i >= peak2; i--)
	    		{
	    			if (h[i] > h[peak1]) pos = false;
	    			MSDS.pb(i);
	    		}
    		}
    		if (!(pos))
    		{
    			// both possibilities covered middle heigher and peak1 shorter.
    			cout << -1 << endl;
    			continue;
    		}
    		int ans = maxSumDS(MSDS, MSDS.size(), a, h, peak1 + 1);
    		cout << ans << endl;
    	}
    }
    return 0;
}

