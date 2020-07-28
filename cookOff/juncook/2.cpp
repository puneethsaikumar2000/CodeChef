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
        int n, m;
        cin >> n >> m;
        vi v(n);
        int ans = 0;
        int less = 0, more = 0;
        int mex_arr = 1;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] > m)
                more += 1;
            if (v[i] < m)
                less += 1;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == mex_arr)
                mex_arr += 1;
            if (v[i] > mex_arr)
                break;
        }
        if (mex_arr < m){
            cout << - 1 << endl;
        }
        else if (mex_arr == m){
            cout << n << endl;
        }
        else{
            cout << less + more << endl;
        }
    }
    return 0;
}