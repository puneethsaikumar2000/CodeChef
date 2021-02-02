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
	int n;
	cin >> n;
	int depth = 0;
	int max_depth = 0;
	int first_depth = -1;
	int max_num = 0;
	int first_max_num = -1;
	int prev_zero = 1;
	REPN(i, n){
		int x;
		cin >> x;
		if (x == 1) depth++;
		if (x == 2) depth--;
		if (depth == 0){
			int new_num = i + 2 - prev_zero;
			if (new_num > max_num){
				max_num = new_num;
				first_max_num = prev_zero;
			}
			prev_zero = i + 2;
		}
		if (depth > max_depth){
			max_depth = depth;
			first_depth = i + 1;
		}
		// printf("i : %d,  depth : %d,  max_depth : %d\n", i + 1, depth, max_depth);
		// printf("max_num : %d,  first_max_num : %d,  prev_zero : %d\n", max_num, first_max_num, prev_zero);
	}
	cout << max_depth << " " << first_depth << " " << max_num << " " << first_max_num << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t = 1;
    // cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

