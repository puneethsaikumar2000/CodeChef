#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
        int chf = 0, mrt = 0;
    	for (int i = 0; i < n; ++i)
        {
            int a, b;
            cin >> a >> b;
            int pow_a = 0, pow_b = 0;
            while(a != 0){
                pow_a += a % 10;
                a /= 10;
            }
            while(b != 0){
                pow_b += b % 10;
                b /= 10;
            }
            if (pow_a > pow_b)
                chf += 1;
            else if (pow_b > pow_a)
                mrt += 1;
            else{
                chf += 1;
                mrt += 1;
            }
        }
        if (chf > mrt)
            cout << 0 << " " << chf << endl;
        else if (chf == mrt)
            cout << 2 << " " << chf << endl;
        else
            cout << 1 << " " << mrt << endl;
    }
    return 0;
}

