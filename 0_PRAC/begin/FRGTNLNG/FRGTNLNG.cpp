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
	vector<string> v_s(n);
	map<string, int> m; 
	REPN(i, n){
	    cin >> v_s[i];
	    m[v_s[i]] = -1;
	}
	REPN(i, k){
	    int l;
	    cin >> l;
	    REPN(j, l){
	        string s;
	        cin >> s;
	        m[s] = 1;
	    }
	}
	REPN(i, n){
	    if (m[v_s[i]] == 1){
	        cout << "YES ";
	    }
	    else{
	        cout << "NO ";
	    }
	}
	cout << "\n";
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

