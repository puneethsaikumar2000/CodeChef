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
        if (n % 2 == 1){
            for (int i = 0; i < n; ++i)
            {
                for (int j = 1; j <= n; ++j)
                {
                    cout << i*n + j << " ";
                }
                cout << endl;
            }
        }
        else{
            for (int i = 0; i < n; ++i)
            {
                if (i % 2 == 0){
                    for (int j = 1; j <= n; ++j)
                    {
                        cout << i*n + j << " ";
                    }
                }
                else{
                    for (int j = n; j >= 1; j--)
                    {
                        cout << i*n + j << " ";
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}