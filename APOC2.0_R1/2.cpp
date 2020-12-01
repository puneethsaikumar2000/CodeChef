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
	int n, k;
	cin >> n >> k;
	vi v(n);
	map<int, int> m1, m2;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		m1[v[i]] += 1;
	}
	int sum = 0;
	for (int i = 0; i < k; ++i)
	{
		sum += v[i];
		m2[v[i]] += 1;
	}
	int uniq = m1.size();
	int ans = sum;
	if (m2.size() != m1.size()) ans = 0;
	for (int i = k; i < n; ++i)
	{
		m2[v[i]] += 1;
		m2[v[i - k]] -= 1;
		sum += v[i];
		sum -= v[i - k];
		int num = 0;
		for (auto elem : m2){
			if (elem.second != 0) num++;
		}
		if (num == uniq) ans = max(ans, sum);
	}
	cout << ans << "\n";
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

