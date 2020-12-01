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
	// cout << "solving\n";
	// REPN(i, 105){
	// 	REPN(j, 105){
	// 		matrix[i][j] = 0;
	// 	}
	// 	ans[i] = 0;
	// }
	int n;
	cin >> n;
	int matrix[n + 1][n + 1];
	int ans[n + 1];
	memset(matrix, 0, sizeof(matrix));
	memset(ans, 0, sizeof(ans));
	// cout << "running 1\n";
	for (int i = 0; i < n - 1; ++i)
	{
		int u, v;
		cin >> u >> v;
		matrix[u][v] = 1;
		matrix[v][u] = 1;
	}
	// printf("running 3 \n");
	ans[1] = 1;
	for (int i = 1; i < n; i++)
	{
		// printf("i : %i\n", i);
		if (ans[i] == 0) ans[i] = 1;
		for (int j = i + 1; j <= n; ++j)
		{
			// printf("i : %i  j : %i\n", i, j);
			if (matrix[i][j] == 0) continue;
			if (ans[i] == 1){
				// if (ans[j] == 1) break;
				if (ans[j] == 0){
					ans[j] = 2;
				}
			}
			else if (ans[i] == 2){
				if (ans[j] == 0){
					ans[j] = 1;
				}
			}
			// printf("ans[i] : %i ;  ans[j] :  %i\n", ans[i], ans[j]);
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
    // printf("running 1 \n");
    while(t--){
    	solve();
    }
    return 0;
}

