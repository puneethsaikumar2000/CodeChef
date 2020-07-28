#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vi v(n);
        lli ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] > k){
                ans += (v[i] - k);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
