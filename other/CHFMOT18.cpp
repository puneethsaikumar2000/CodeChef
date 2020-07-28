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
        int s, n;
        cin >> s >> n;
        int ans = 0;
        ans += (s / n);
        s %= n;
        if (s == 0)
            ans += 0;
        else if (s == 1)
            ans += 1;
        else if (s % 2 == 1)
            ans += 2;
        else
            ans += 1;

        cout << ans << endl;
    }
    return 0;
}