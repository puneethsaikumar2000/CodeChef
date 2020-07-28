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
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, b, m;
        cin >> n >> b >> m;
        vi v(m);
        int load = -1;
        int ans = 0;
        for (int i = 0; i < m; ++i)
        {
            cin >> v[i];
            if (load == -1){
                ans += 1;
                load = v[i] / b;
            }
            else{
                if (b*load <= v[i] and v[i] < b*(load + 1)){
                    continue;
                }
                else{
                    ans += 1;
                    load = v[i] / b;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}