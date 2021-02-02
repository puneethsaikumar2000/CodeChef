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
	string b;
	cin >> b;
	string a;
	a = "1";
	string d = "";
	if (b[0] == '0') d = "1";
	else d = "2";
	for (int i = 1; i < n; i++){
		if (d[i - 1] == '0'){
			a += '1';
			if (b[i] == '0') d += '1';
			else d += '2';
			// cout << "i :" << 1 << "" << i << "\n";
			// cout << a << "\n";
			// cout << d << "\n";
		}
		else if (d[i - 1] == '1'){
			if (b[i] == '0'){
				a += '0';
				d += '0';
			}
			else{
				a += '1';
				d += '2';
			}
			// cout << "i :" << 2 << "" << i << "\n";
			// cout << a << "\n";
			// cout << d << "\n";
		}
		else{
			if (b[i] == '0'){
				a += '1';
				d += '1';
			}
			else{
				a += '0';
				d += '1';
			}
		}
	}
	cout << a << "\n";
	// cout << d << "\n";
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

