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

// WON'T SUFFICE due to LARGE NUMBERS
lli fact(int n){
	lli result = 1;
	for (int i = 2; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}

void multiply(int a[], int n, int &m, int k){
	int i = 0;
	int temp = 0;
	while (i < k){
		int x = a[i] * n + temp;
		// printf("i : %i  x: %i  temp: %i  a[i]: %i n: %i\n", i, x, temp, a[i], n);
		a[i] = x % 10;
		temp = x / 10;
		if (a[i] != 0) m = i + 1;
		i++;
	}
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int a[200];
    	memset(a, 0, sizeof(a));
    	a[0] = 1;
    	int m = 1;
    	for (int i = 2; i <= n; ++i)
    	{
    		multiply(a, i, m, 200);
    	}

    	for (int i = m - 1; i >= 0; i--)
    	{
    		cout << a[i];
    	}
    	cout << "\n";
    }
    return 0;
}

