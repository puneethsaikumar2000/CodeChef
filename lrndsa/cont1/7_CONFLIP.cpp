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
    	int g;
		cin >> g;
		while(g--){
			int i, n, q;
			cin >> i >> n >> q;
			if (n % 2 == 0)
				cout << (n / 2) << endl;
			else if (q == i){
				cout << (n / 2) << endl;
			}
			else{
				cout << (n / 2) + 1 << endl;
			}
		}
	}
    return 0;
}
