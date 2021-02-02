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


bool possibleSum(vi v, int k, int siz){
	int pos[k + 1] = {false};
	pos[0]= true;
	// int siz = v.size();
	for (int i = 0; i < siz; i++){
		for (int j = k; j >= v[i]; j--){
			if (pos[j - v[i]]) pos[j] = 1;
		}
	}
	return pos[k];
}

void solve(){
	int n, k;
	cin >> n >> k;
	vi v(n);
	int total_sum = 0, ans = 0;
	REPN(i, n){
		cin >> v[i];
		total_sum += v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	if (2*k > total_sum or n == 1){
		cout << -1 << "\n";
		return;
	}
	else if (total_sum == 2 * k){
		if (v[0] > k){
			cout << -1 << "\n";
			return;
		}
		else if (v[0] == k){
			cout << n << "\n";
		}
		else{
			if (possibleSum(v, k, v.size())){
				cout << n << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	}
	else if (v[0] >= k){
		ans = 1;
		int tempsum = 0;
		for (int i = 1; i < n; i++){
			tempsum += v[i];
			ans++;
			if (tempsum >= k){
				cout << ans << "\n";
				return;
			}
		}
		cout << -1 << "\n";	
		return ;
	}
	else {
		int sum1 = 0, sum2 = 0, idx = 0;
		vi v1;
		int sum = 0;
		int ind = 0;
		while (sum < 2*k and ind < n){
			sum += v[ind];
			ind++;
			v1.push_back(v[ind]);
		}
		if (possibleSum(v1, k, v1.size())){
			cout << v1.size() << "\n";
			return;
		}
		while (idx < n and (sum1 < k or sum2 < k)){
			if (sum1 < k){
				sum1 += v[idx];
				idx++;
			}
			else if (sum2 < k){
				sum2 += v[idx];
				idx++;
			}
		}
		if (sum1 >= k and sum2 >= k){
			cout << idx << "\n";
		}
		else{
			cout << -1 << "\n";
			return;
		}
	}
	return ;
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

