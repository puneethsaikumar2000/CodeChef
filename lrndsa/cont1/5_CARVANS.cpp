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
		vector<long long int> v(n);
		long long int prev = 0, ans = 1;
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			if (i == 0){
				prev = v[i];
				continue;
			}
			if (v[i] <= prev)
				ans += 1;
			prev = min(v[i], prev);
		}
		cout << ans << endl;
    }
    return 0;
}
