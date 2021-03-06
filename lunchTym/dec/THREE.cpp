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
	string s;
	cin >> s;
	int a[26];
	memset(a, 0, sizeof(a));
	int n = s.length();
	REPN(i, n){
		a[s[i] - 'a']++;
	}
	int pairs = 0, odds = 0;
	REPN(i, 26){
		pairs += a[i] / 2;
		odds += a[i] % 2;
	}
	int ans = min(pairs, odds);
	odds -= ans;
	pairs -= ans;
	if (pairs == 0){
		cout << ans << "\n";
	}
	else if (odds == 0){
		ans += 2 * (pairs / 3);
		pairs = pairs % 3;
		if (pairs == 2){
			ans++;
		}
		cout << ans << "\n";
	}
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

