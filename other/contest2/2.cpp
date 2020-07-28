#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;

int main()
{
	int n;
	cin>>n;
	vector<pi> v(n);
	long long int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int b, d;
		cin >> b >> d;
		
		ans += (d - b + 1);
		ans %= 1000000007;
	}
	cout << ans << endl;
	return 0;
}