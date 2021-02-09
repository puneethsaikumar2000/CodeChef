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

// two solution types : a) Binary search O(NlogX + NlogY)
// 						b) two arrays V[MAX + 1], W[MAX + 1] MAX + 10^5 then doing V[i-1] = V[i] if V[i] != -1 similarly W[i+1] = W[i] if W[i] != -1
// 						Basically, doing 0 ... MAX marking at any time which is the nearest worm hole which can be taken.

void solve(){
	int n, x, y;
	cin >> n >> x >> y;
	vector<pii> cont(n);
	int N1 = 1000000;
	int V[N1 + 1], W[N1 + 1];
	memset(V, -1, sizeof(int)*(N1+1));
	memset(W, -1, sizeof(int)*(N1+1));
	// vi V(x);
	// vi W(y);
	REPN(i, n){
		int u, v;
		cin >> u >> v;
		cont[i] = mk(u, v);
	}
	REPN(i, x){
		int d;
		cin >> d;
		V[d] = d;
	}
	REPN(i, y){
		int d;
		cin >> d;
		W[d] = d;
	}
	int prev = -1;
	for (int i = 1; i < N1; i++){
		if (V[i] != -1){
			prev = V[i];
		}
		else{
			V[i] = prev;
		}
	}
	int nxt = -1;
	for (int i = N1 - 1; i >= 1; i--){
		if (W[i] != -1){
			nxt = W[i];
		}
		else{
			W[i] = nxt;
		}
	}
	int ans = N1;
	for (int i = 0; i < n; i++){
		// printf("%d %d %d %d\n", cont[i].ff, cont[i].ss, V[cont[i].ff], W[cont[i].ss]);
		if (W[cont[i].ss] != -1 && V[cont[i].ff] != -1){
			ans = min(ans, W[cont[i].ss] - V[cont[i].ff] + 1);
		}
	}
	cout << ans << "\n";
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

