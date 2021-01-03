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
	int a[n];
	REPN(i, n){
		cin >> a[i];
	}
	int entry = 1;
	if (a[0] != 1 or a[n - 1] != 1){
		cout << "no\n";
		return ;
	}
	for (int i = 0; i <= n / 2; i++){
		if (a[i] != entry){
			if (a[i] == entry + 1) entry += 1;
			else{
				cout << "no\n";
				return ;
			}
		}
		if (a[i] != entry or a[n - 1 - i] != entry or a[i] != a[n - 1 - i]){
			cout << "no\n";
			return ;
		}
	}
	if (entry != 7){
		cout << "no\n";
		return ;
	}
	cout << "yes\n";
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

