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
		// printf("n: %i\n", n);
		while (n % 10 == 0)
			n = n / 10;
		while (n != 0){
			// printf("n: %i\n", n);
			// if (n % 10 != 0)
			cout << n % 10;
			n = n / 10;
		}
		cout << endl;
	}
	return 0;
}
