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

int num_4(int x){
    int res = 0;
    while(x){
        if (x % 10 == 4)
            res += 1;
        x /= 10;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    fastio;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        cout << num_4(x) << "\n";
    }
    return 0;
}

