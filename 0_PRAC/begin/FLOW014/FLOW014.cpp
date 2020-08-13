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

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	double h, c, s;
    	cin >> h >> c >> s;
    	bool b1 = (h > 50);
    	bool b2 = (c < 0.7);
    	bool b3 = (s > 5600);
    	if (b1 && b2 && b3){
    		cout << 10 << "\n";
    	}
    	else if (b1 && b2){
    		cout << 9 << "\n";
    	}
    	else if (b2 && b3){
    		cout << 8 << "\n";
    	}
    	else if (b1 && b3){
    		cout << 7 << "\n";
    	}
    	else if (b1 || b2 || b3){
    		cout << 6 << "\n";
    	}
    	else{
    		cout << 5 << "\n";
    	}
    }
    return 0;
}

