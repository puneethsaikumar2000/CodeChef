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
	lli n;
	cin >> n;
	vector<ll> v;
	while(n){
		v.push_back(n % 10);
		n /= 10;
	}
	reverse(v.begin(), v.end());
	int m = v.size();
	if (m == 1){
		cout << n << "\n";
		return ;
	}
	int i = 0;
	int level = m - 1;
	for (i = m - 1; i > 0; i--)
	{
		if (v[i] < v[i - 1]){
			v[i - 1] -= 1;
			level = i - 1;
			// break;
		}
	}
	if (v[0] != 0){
		for (long long i=0; i<=level; i++)
			cout << v[i];
		for (long long i=level+1; i<m; i++)
			cout << "9";
	}
	else{
		for (long long i=1; i<level; i++) 
            cout << v[i]; 
		for (long long i=level+1; i<m; i++) 
            cout << "9";
	}
	cout << "\n";
	return ;
	while (i < m){
		v[i] = 9;
		i++;
	}
	lli ans = 0;
	// print
	for (i = 0; i < m; ++i)
	{
		ans *= 10;
		ans += v[i];
		// cout << v[i];
	}
	// cout << "\n";
	cout << ans << "\n";
}

void solve2(){
	lli n;
	cin >> n;
	vector<ll> a;
	while(n){
		a.push_back(n % 10);
		n /= 10;
	}
	reverse(a.begin(), a.end());
	int m = a.size();

	long long level = m-1; 
    for (long long i=m-1; i>0; i--) 
    {
        if (a[i] < a[i-1]) 
        { 
            a[i-1]--; 
            level=i-1;
            // break;
        } 
    }
    if (a[0] != 0) 
    { 
        for (long long i=0; i<=level; i++)
            cout << a[i]; 
        for (long long i=level+1; i<m; i++) 
            cout << "9"; 
    } 
    else
    {
        for (long long i=level+1; i<m; i++) 
            cout << "9";
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve2();
    }
    return 0;
}

