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
        int n;
        cin >> n;
        vi v(n);
        map<int, int> m;
        m[5] = 0; m[10] = 0; m[15] = 0;
        bool pos = true;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (v[i] == 5){
                m[5] += 1;
            }
            else if (v[i] == 10){
                if (m[5] >= 1){
                    m[5] -= 1;
                    m[10] += 1;
                }
                else{
                    pos = false;
                    break;
                }
            }
            else if (v[i] == 15){
                if (m[10] >= 1){
                    m[10] -= 1;
                    m[15] += 1;
                }
                else if (m[5] >= 2){
                    m[5] -= 2;
                    m[15] += 1;
                }
                else{
                    pos = false;
                    break;
                }
            }
        }
        if (pos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}