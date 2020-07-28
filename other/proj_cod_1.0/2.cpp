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
    	int n, k;
		cin >> n >> k;
		if (k <= n){
            cout << k << endl;
            continue;
        }
        int r = k % (2*n - 2);
        if (r == 0){
            cout << 2 << endl;
        }
        else if (r <= n){
            cout << r << endl;
        }
        else{
            cout << 2*n - r << endl;
        }
    }
    return 0;
}
