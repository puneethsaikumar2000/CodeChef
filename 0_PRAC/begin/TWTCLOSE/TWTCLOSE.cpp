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
#define REP(i, a, b) for (int i = a; i <= b; i++)
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

}

int main(int argc, char const *argv[])
{
    fastio;
    int n, k;
    cin >> n >> k;
    vi v(n + 1, 0);
    // NAIVE METHOD, suffice here.
    for (int t = 0; t < k; ++t)
    {
    	string s;
    	int x;
    	cin >> s;
    	if (s == "CLICK"){
    		cin >> x;
    		v[x] = (v[x] == 1) ? 0 : 1;
    	}
    	else{
    		REP(i, 1, n){
    			v[i] = 0;
    		}
    	}
    	int ans = 0;
    	for (int i = 1; i <= n; ++i)
    	{
    		ans += (v[i] == 1)? 1 : 0;
    	}
    	cout << ans << "\n";
    }
    return 0;
}

