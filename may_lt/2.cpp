#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

#define pb push_back;
#define mp make_pair;
#define ff first;
#define ss second;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vlli a(n);
		vlli b(n);
		vlli dista(n,0);
		vlli distb(n,0);
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			if (i != 0){
				dista[i] = dista[i-1] + a[i-1];
			}
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
			if (i != 0){
				distb[i] = distb[i-1] + b[i-1];
			}
		}
		lli ans = 0;
		for (int i = 0; i < n; ++i)
		{
			if (dista[i] == distb[i] and a[i] == b[i])
				ans += a[i];
		}
		cout << ans << endl;
	}
	return 0;
}
