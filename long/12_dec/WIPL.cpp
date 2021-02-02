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
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define REPN(i, n) for (int i = 0; i < n; i++)
#define SQ(a) (a)*(a) // a * a then it gives wrong for 3 + 3 = >   3 + 3 * 3 + 3.

typedef long long int lli;
typedef unsigned long long int ulli;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<lli> vlli;
typedef map<int, int> mii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

void solve(){
	int n, k;
	cin >> n >> k;
	vi v(n);
	int total_sum = 0;
	REPN(i, n){
		cin >> v[i];
		total_sum += v[i];
	}
	if (2*k > total_sum or n == 1){
		cout << -1 << "\n";
		return;
	}
	sort(v.begin(), v.end(), greater<int>());
	int sum = 0;
	int ind = 0;
	vi v1;
	while (sum < 2*k and ind < n){
		sum += v[ind];
		ind++;
		v1.push_back(v[ind]);
	}
	vi v11, v12;
	int sum1 = 0, sum2 = 0, idx = 0;
	int m = v1.size();
	while (idx < m){
		if (sum1 < sum2){
			v11.push_back(v1[idx]);
			sum1 += v1[idx];
		}
		else{
			v12.push_back(v1[idx]);
			sum2 += v1[idx];
		}
		idx++;
	}
	if (sum1 >= k and sum2 >= k){
		cout << m << "\n"; 
		return;
	}
	int incr = 0;
	if (sum1 >= k){
		while (sum2 < k and ind < n){
			sum2 += v[ind];
			ind++;
			incr++;
		}
	}
	else if (sum2 >= k){
		while (sum1 < k and ind < n){
			sum1 += v[ind];
			ind++;
			incr++;
		}
	}
	if (sum1 >= k and sum2 >= k){
		cout << m + incr << "\n"; 
		return;
	}
	cout << -1 << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

