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
    	long long int k, d0, d1;
		cin >> k >> d0 >> d1;
		if (k == 2){
			if ((d0 + d1) % 3 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else{
			long long int sum = 0;
			sum += d0 + d1;
			sum += ((d0 + d1) % 10);
			int r = (k - 3) % 4;
			int a[4];
			a[0] = (2*(d0+d1)) % 10;
			a[1] = (4*(d0+d1)) % 10;
			a[2] = (8*(d0+d1)) % 10;
			a[3] = (6*(d0+d1)) % 10;
			sum += ((k - 3) / 4) * (a[0] + a[1] + a[2] + a[3]);
			int s1 = 0;
			for (int i = 0; i < r; ++i)
			{
				s1 += a[i];
			}
			sum += s1;
			// printf("%lli %lli\n", d0, d1);
			// printf("%i %i %i %i %lli\n", a[0], a[1], a[2], a[3], sum);
			if (sum % 3 == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
    return 0;
}
