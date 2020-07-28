#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define maxn 300005
#define mod 1000000007
#define inf 1000000007

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

lli gcd(int a, int b){
	if (b == 0)
		return a;
	int temp;
	while(b){
		a %= b;
		temp = a;
		a = b;
		b = temp;
	}
	return a;
}

lli lcm(int a, int b){
	return a / gcd(a, b) * b;
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int a, b;
    	cin >> a >> b;
    	lli LCM = a;
    	LCM *= b;
    	LCM /= gcd(a, b);
    	cout << gcd(a, b) << " " << LCM << endl;
    }
    return 0;
}

