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

void mergeSort(vi &v){
	// ...
}

// Can use Bucket Sort since n <= 1e6

int main(int argc, char const *argv[])
{
    fastio;

	int n;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}

    return 0;
}

