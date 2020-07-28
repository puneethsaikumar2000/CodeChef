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
        string s;
        cin >> s;
        int ans = 0;
        // bool taken = false;
        for (int i = 0; i < s.length() - 1; ++i)
        {
            if (s[i] != s[i+1])
            {
                ans += 1;
                i += 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}