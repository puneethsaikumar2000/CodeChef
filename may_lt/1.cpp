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
		vlli v(n);
		lli ones = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			if (v[i] == 1)
				ones += 1;
		}
		if (ones == 0){
			cout << 0 << endl;
		}
		else if (ones == 1){
			cout << -1 << endl;
		}
		else{
			
		}
	}
	return 0;
}
