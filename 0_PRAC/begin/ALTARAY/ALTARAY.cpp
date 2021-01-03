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
	int n;
	cin >> n;
	lli a[n];
	int b[n];
	REPN(i, n){
		cin >> a[i];
		if (i == 0) b[i] = 0;
		else{
			if ((ll)a[i] * a[i - 1] < 0){
				b[i] = 1;
			}
			else{
				b[i] = 0;
			}
		}
	}
	int c[n];
	c[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--){
		if (b[i + 1]){
			c[i] = c[i + 1] + 1;
		}
		else c[i] = 1;
	}

	REPN(i, n){
		cout << c[i] << " ";
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

