#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long long ll;
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
        string s;
        cin >> n >> s;
        int a = 0, b = 0;
        int i = 0;
        for (;i < 2*n; i += 1)
        {
            if (i % 2 == 0){
                if (s[i] == '1')
                    a += 1;
                if (a > b + n - (i / 2)){
                    cout << i + 1 << endl;
                    break;
                }
                if (b > a + n - 1 - (i / 2)){
                    cout << i + 1 << endl;
                    break;
                }
            }
            else{
                if (s[i] == '1')
                    b += 1;
                if (a > b + ((2*n - 1 - i)/2)){
                    cout << i + 1 << endl;
                    break;
                }
                if (b > a + ((2*n - 1 - i)/2)){
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        if (a == b and i == 2*n)
            cout << 2*n << endl;
    }
    return 0;
}