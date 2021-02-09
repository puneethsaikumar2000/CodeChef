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
#define INCR(i, a, b) for (int i = a; i <= b; i++)
#define DECR(i, a, b) for (int i = a; i >= b; i--)
#define REPN(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void solve(){
	int n, k;
	cin >> n >> k;
	vi v(n);
	REPN(i, n){
		cin >> v[i];
	}
	stack<pair<lli, int>> st;
	lli ans = 1;
	for (int i = n - 1; i >= 0; i--){
		while (st.size() > 0 && st.top().ff >= v[i]){
			st.pop();
		}
		if (st.size() > 0){
			pii p = st.top();
			ans = (lli) (ans * (p.ss - i + 1));
			ans %= mod;
		}
		st.push(mk(v[i], i));
	}
	cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

