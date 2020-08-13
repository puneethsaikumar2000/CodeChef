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
    	int r;
    	cin >> r;
    	int x1, y1, x2, y2, x3, y3;
    	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    	double d12 = (double)sqrt(SQ(x1 - x2) + SQ(y1 -y2));
    	double d13 = (double)sqrt(SQ(x1 - x3) + SQ(y1 -y3));
    	double d23 = (double)sqrt(SQ(x2 - x3) + SQ(y2 -y3));
    	if (d12 <= r and d13 <= r){
    		cout << "yes\n";
    	}
    	else if (d12 <= r and d23 <= r){
    		cout << "yes\n";
    	}
    	else if (d13 <= r and d23 <= r){
    		cout << "yes\n";
    	}
    	else{
    		cout << "no\n";
    	}
    }
    return 0;
}

