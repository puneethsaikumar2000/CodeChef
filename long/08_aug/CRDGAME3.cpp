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
	int pc, pr;
	cin >> pc >> pr;
	int c9, r9;
	int cr, rr;
	c9 = (pc / 9);
	r9 = (pr / 9);
	cr = (pc % 9);
	rr = (pr % 9);
	int win, num;
	if (cr != 0 and rr != 0){
		if (r9 + 1 <= c9 + 1){
			win = 1;
			num = r9 + 1;
		}
		else{
			win = 0;
			num = c9 + 1;
		}
	}
	else if (cr == 0 and rr != 0){
		if (r9 + 1 <= c9){
			win = 1;
			num = r9 + 1;
		}
		else{
			win = 0;
			num = c9;
		}
	}
	else if (cr != 0 and rr == 0){
		if (r9 <= c9 + 1){
			win = 1;
			num = r9;
		}
		else{
			win = 0;
			num = c9 + 1;
		}
	}
	else{
		if (r9 <= c9){
			win = 1;
			num = r9;
		}
		else{
			win = 0;
			num = c9;
		}
	}
	cout << win << " " << num << "\n";
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

