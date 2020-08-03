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

int count_1_bin(int n){
    int res = 0;
    while(n){
        if (n & 1)
            res++;
        n >>= 1;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
        int exist = n / 2048;
        n %= 2048;
    	int ans = count_1_bin(n);
    	cout << ans + exist << "\n";
    }
    return 0;
}

