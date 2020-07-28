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
		lli a1, a2, a3, a4, a5, p;
		cin >> a1 >> a2 >> a3 >> a4 >> a5 >> p;
		if ((a1 + a2 + a3 + a4 + a5)*p > 120){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
	return 0;
}
