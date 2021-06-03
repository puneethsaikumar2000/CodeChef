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


void solve1(){ // more time to execution than solve.
	int n, z;
	cin >> n >> z;
	multiset<int> s;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.insert(x);
	}
	s.insert(0);
	lli ans = 0;
	auto it = s.end();
	it--;
	for (; it != s.begin() and z >= 0; it--){
		z -= *it;
		s.insert((*it) / 2);
		ans++;
		// cout << *it << " " << z << "\n";
	}
	if (z > 0) cout << "Evacuate\n";
	else cout << ans << endl;
}

void solve(){
	int n, z;
	cin >> n >> z;
	// vi v(n);
	map<int, int> m;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		m[x]++;
	}
	lli ans = 0;
	for (int i = 10001; i > 0; i--){
		while (m[i] > 0 and z > 0){
			m[i]--;
			m[i/2]++;
			z -= i;
			ans++;
		}
		if (z <= 0) break;
	}
	if (z > 0) cout << "Evacuate\n";
	else cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve1();
    }
    return 0;
}

