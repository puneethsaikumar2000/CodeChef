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
        ulli ts;
        cin >> ts;
        while (ts % 2 == 0){
            ts /= 2;
        }
        cout << ts / 2 << endl;
    }
    return 0;
}