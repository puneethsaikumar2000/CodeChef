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
        int n;
        cin >> n;
        vector<int> s(n), v(n), p(n);
        // int ans = 0;
        int amt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i] >> p[i] >> v[i];
            // printf("%i %i %i %i\n", p[i], s[i] + 1, v[i], p[i] / (s[i] + 1));
            // printf("%i\n", (p[i] / (s[i] + 1))*v[i]);
            amt = max(amt, (p[i] / (s[i] + 1))*v[i]);
        }
        cout << amt << endl;
    }
    return 0;
}