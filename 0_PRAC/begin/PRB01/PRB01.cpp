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
#define LL long long


typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

bool isprime(int n){
    if (n <= 4)
        return (n == 2 or n == 3);
    if (n % 2 == 0)
        return false;
    for (LL i = 3; i * i <= n; i += 2){
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    // fastio;
    int t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	if (isprime(n))
    		cout << "yes\n";
    	else
    		cout << "no\n";
    }
    return 0;
}

