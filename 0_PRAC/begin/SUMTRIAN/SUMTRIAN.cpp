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
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FOR1(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.


typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;


int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vvi v(n);
    	int x;
    	FOR1(i, n){
    		FOR1(j, i + 1){
    			cin >> x;
    			v[i].pb(x);
    		}
    	}
    	FOR(i, 1, n - 1){
    		v[i][0] += v[i - 1][0];
    		FOR(j, 1, i - 1){
    			v[i][j] += max(v[i - 1][j], v[i - 1][j - 1]);
    		}
    		v[i][i] += v[i - 1][i - 1];
    	}
    	int ans = 0;
    	FOR1(j, n){
    		ans = max(ans, v[n - 1][j]);
    	}
    	cout << ans << "\n";
    }
    return 0;
}

