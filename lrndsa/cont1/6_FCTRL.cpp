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
    	long long int n;
		cin >> n;
		long long int ans = 0;
		while (n != 0){
			ans += (n / 5);
			n = n / 5;
		}
		cout << ans << endl;
	}
    return 0;
}
