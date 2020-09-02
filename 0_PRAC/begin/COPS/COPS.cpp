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
	int m, x, y;
	cin >> m >> x >> y;
	vi v(m);
	vi houses(101, 0);
	houses[0] = 0;
	for (int i = 0; i < m; ++i)
	{
		cin >> v[i];
		int l = max(1, v[i] - (x * y));
		int r = min(100, v[i] + (x * y));
		houses[l] += 1;
		if (r < 100)
			houses[r + 1] -= 1;
		else
			houses[100] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= 100; i++){
		houses[i] += houses[i - 1];
		if (houses[i] == 0) ans++;
	}
	cout << ans << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

