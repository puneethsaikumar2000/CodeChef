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


int digits(int x){
	int ans = 0;
	while(x){
		ans += 1;
		x /= 2;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	// if (n > 1000)
    	// 	continue;
    	vi a(n);
    	vector<lli> d(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		d[i] = pow(2, digits(a[i])) - 1;
    	}
    	lli ans = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < n; ++j)
    		{
    			lli ans1 = a[i];
    			ans1 *= d[j];
    			lli res = a[j];
    			res *= d[i];
    			ans1 -= res;
    			ans = max(ans, ans1);
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}

