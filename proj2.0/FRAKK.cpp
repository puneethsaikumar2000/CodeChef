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
        lli n, p, q;
        cin >> n >> p >> q;
        lli ans = 0;
        vi digits;
        int first = -1;
        for (int i = 0; i < n; i++){
            lli x = ((p * 10.0) / q) - ((p / q) * 10.0);
            if (first == -1)
                first = x;
            if (first == x)
                break;
            digits.push_back(x);
            printf("ans: %lli x: %lli p: %lli\n", ans, x, p);
            ans += x;
            p *= 10;
        }
        cout << ans << endl;
    }
    return 0;
}