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
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	lli ans = 0;
    	int min_elem = -1, x;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> x;
    		if (i == 0)
    			min_elem = x;
    		else
    			min_elem = min(min_elem, x);
    		ans += min_elem;
    	}
    	cout << ans << endl;
    }
    return 0;
}

