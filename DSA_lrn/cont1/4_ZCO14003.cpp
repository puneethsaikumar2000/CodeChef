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
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	long long int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = max((n - i) * v[i], ans);
	}
	cout << ans << endl;
}
