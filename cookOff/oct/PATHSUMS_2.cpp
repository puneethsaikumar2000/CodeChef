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

// int matrix[105][105];
// int ans[105];

void solve(){
	int n;
	cin >> n;
	int matrix[n + 1][n + 1];
	int ans[n + 1];
	memset(matrix, 0, sizeof(matrix));
	memset(ans, 0, sizeof(ans));
	for (int i = 0; i < n - 1; ++i)
	{
		int u, v;
		cin >> u >> v;
		matrix[u][v] = 1;
		matrix[v][u] = 1;
	}
	// ans[1] = 1;
	vector<pii> v;
	v.push_back({1, 1});
	while(v.size() != 0){
		pii p = v[0];
		v.erase(v.begin());
		int i = p.ff;
		ans[i] = p.ss;
		int val = p.ss;
		for (int j = 1; j <= n; ++j)
		{
			if (matrix[i][j] == 0 or ans[j] != 0) continue;
			if (val == 1) v.push_back({j, 2});
			else if (val == 2) v.push_back({j, 1});
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << ans[i] << " ";
	}
	cout << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

