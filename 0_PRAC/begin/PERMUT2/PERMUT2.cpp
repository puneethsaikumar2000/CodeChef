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
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    fastio;
    while(true){
    	int n;
    	cin >> n;
    	if (n == 0)
    		break;
    	vi v(n + 1);
    	v[0] = 0;
    	for (int i = 1; i <= n; ++i)
    	{
    		cin >> v[i];
    	}
    	bool ans = true;
    	for (int i = 1; i <= n; ++i)
    	{
    		if (i != v[v[i]])
    			ans = false;
    	}
    	if (ans)
    		cout << "ambiguous\n";
    	else
    		cout << "not ambiguous\n";
    }
    return 0;
}

