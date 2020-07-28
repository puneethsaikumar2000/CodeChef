#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define endl "\n"

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		long long n, k;
		cin>>n>>k;
		long long time = n*n;

		if (n == 0){
			cout << (k*(k-1))%mod << endl;
			continue;
		}
		else{
			time = n*n;
			time %= mod;
			time += (2 * (k / 2) * n);
			time %= mod;
			k = (k + 1) / 2;
			time += (k * (k - 1));
			time %= mod;

			cout << time << endl;
		}
	}
	return 0;
}