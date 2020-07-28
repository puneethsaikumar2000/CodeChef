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
    	vi v(n);
    	bool ans = true;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> v[i];
    		if (v[i] % 2 == 0)
    			ans = false;
    	}
    	if (ans)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
    }
    return 0;
}

