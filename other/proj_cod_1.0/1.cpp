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
    long long int ans = 0;
    for (int j = 0; j < t; j++){
    	int s, n, k, r;
		cin >> s >> n >> k >> r;
		long long int need = 0;
		for (int i = 0; i < n; ++i)
		{
			need += k*pow(r, i);
		}
		if (need <= s){
			cout << "POSSIBLE " << (s - need) << endl;
			ans += s - need;
		}
		else{
			cout << "IMPOSSIBLE " << (need - s) << endl;
			ans += s - need;
		}
	}
	if (ans >= 0)
		cout << "POSSIBLE" << endl;
	else
		cout << "IMPOSSIBLE" << endl;
    return 0;
}
