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
    	int n, m, x, y;
    	cin >> n >> m >> x >> y;
    	lli ans;
    	// int max_elem;
    	if (2 * x <= y){
    		ans = n * m;
    		ans *= x;
    		// ans *= y;
    		cout << ans << endl;
    	}
    	else if (x <= y){
    		if (n % 2 == 1 && m % 2 == 1){
    			lli ans1 = (m * n);
    			ans1 /= 2;
    			ans1 += 1;
    			// ans *= y;
    			// if (y % 2)
    			// 	ans += ((m * n) / 2) + 1;
    			// int max_elem = max(y - x, x);
    			// lli ans1 = m * n;
    			// ans1 /= 2;
    			// ans1 *= y;
    			// ans1 += max_elem;
    			// lli ans2 = n * (m - 1);
    			// ans2 /= 2;
    			// ans2 *= y;
    			// ans2 += ((n / 2) * y) + max_elem;
    			// ans = max(ans1, ans2);
    			ans = (ans1 * x);
    			ans += (ans1 - 1) * (y - x);
    		}
    		else{
    			ans = n * m;
    			ans /= 2;
    			ans *= y;
    		}
    		cout << ans << endl;
    	}
    	else{
    		if (n % 2 && m % 2){
    			lli ans1 = (m * n);
    			ans1 /= 2;
    			ans1 += 1;
    			// if (y % 2)
    			// 	ans += ((m * n) / 2) + 1;
    			// int max_elem = y;
    			// lli ans1 = m * n;
    			// ans1 /= 2;
    			// ans1 *= y;
    			// ans1 += max_elem;
    			// lli ans2 = n * (m - 1);
    			// ans2 /= 2;
    			// ans2 *= y;
    			// ans2 += ((n / 2) * y) + max_elem;
    			// ans = max(ans1, ans2);
    			if (m == 1 and n == 1)
    				ans = (ans1 * x);
    			else
    				ans = (ans1 * y);
    			// ans += (ans1 - 1) * (y - x);
    		}
    		else{
    			ans = n * m;
    			ans /= 2;
    			ans *= y;
    		}
    		cout << ans << endl;
    	}
    }
    return 0;
}

