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

// lli fact(int n){
// 	lli res = 1;
// 	for (int i = 2; i <= n; ++i)
// 	{
// 		/* code */
// 	}
// }


int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	lli fact[21] = {1};
    	for (int i = 1; i <= 20; ++i)
    	{
    		fact[i] = fact[i - 1] * i;
    	}
    	cout << fact[n] << "\n";
    }
    return 0;
}

