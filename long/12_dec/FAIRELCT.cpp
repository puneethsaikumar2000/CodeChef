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
	int n, m;
	cin >> n >> m;
	vi v1(n), v2(m);
	int diff = 0;
	REPN(i, n){
		cin >> v1[i];
		diff += v1[i];
	}
	REPN(i, m){
		cin >> v2[i];
		diff -= v2[i];
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int i = 0, j = m - 1;
	int moves = 0;
	// printf("diff : %d, i : %d, j : %d\n", diff, i, j);
	while (diff <= 0 and v1[i] < v2[j] and i < n and j >= 0){
		diff += 2 * (v2[j] - v1[i]);
		i++;
		j--;
		moves++;
		// printf("diff : %d, i : %d, j : %d\n", diff, i, j);
	}
	if (diff <= 0){
		cout << -1 << "\n";
		return ;
	}
	cout << moves << "\n";
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

