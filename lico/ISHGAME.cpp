#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        map<char, int> m;
        for (int i = 0; i < b.size(); ++i)
        {
            m[b[i]] = 1;
        }
        for (int i = 0; i < a.size(); ++i)
        {
            if (m[a[i]] == 0)
                printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}