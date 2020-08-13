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

int gcd(int a, int b){
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	vi v(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    	}
    	int g = __gcd(v[0], v[1]);
    	for (int i = 2; i < n; ++i)
    	{
    		g = __gcd(g, v[i]);
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cout << v[i] / g << " ";
    	}
    	cout << "\n";
    }
    return 0;
}

