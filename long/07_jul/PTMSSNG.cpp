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

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	map<int, int> x, y;
    	for (int i = 1; i < 4*n; ++i)
    	{
    		int a, b;
    		cin >> a >> b;
    		x[a] += 1;
    		y[b] += 1;
    	}
    	int ansx, ansy;
    	for(auto i : x){
    		if (i.second % 2 == 1)
    			ansx = i.first;
    	}
    	for(auto i : y){
    		if (i.second % 2 == 1)
    			ansy = i.first;
    	}
    	cout << ansx << " " << ansy << endl;
    }
    return 0;
}

