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

int ineff(vi &f, int a, int b);
int solve(vi &f, int ind);

int n, k;

int soln[1005] = {0};
int inef[1005] = {0};
int mem[101][1005] = {0};

int solve(vi &f, int ind){
	if (ind == n) return 0;
	if (ind + 1 == n) return k;
	if (soln[ind] != 0) return soln[ind];
	int res = inf;
	for (int i = ind; i < n; ++i)
	{
		res = min(res, ineff(f, ind, i) + solve(f, i + 1));
	}
	soln[ind] = res;
	return res;
}

int ineff(vi &f, int a, int b){
	// printf("ineff: %i  %i\n", a, b);

	// if (a == 0) return inef[b];
	// return inef[b] - inef[a - 1];

	int res = k, num = 0;
	for (int i = 1; i <= 100; ++i)
	{
		if (a == 0){
			num = mem[i][b];
		}
		else{
			num = mem[i][b] - mem[i][a - 1];
		}
		if (num > 1){
			res += num;
		}
	}
	// NAIVE
	// map<int, int> m;
	// for (int i = a; i <= b; ++i)
	// {
	// 	m[f[i]] += 1;
	// }
	// for (auto i : m){
	// 	if (i.second > 1){
	// 		res += i.second;
	// 	}
	// }
	return res;
}



void calc_ineff(vi &f, int n){
	memset(mem, 0, sizeof(mem));
	for (int i = 0; i < n; ++i)
	{
		if (i == 0){
			mem[f[i]][i] = 1;
		}
		else{
			mem[f[i]][i] = 1;
		}
	}
	for (int i = 1; i <= 100; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			mem[i][j] += mem[i][j - 1];
		}
	}
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	cin >> n >> k;
    	for (int i = 0; i <= 1000; ++i)
    	{
    		soln[i] = 0;
    	}
    	vi f(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> f[i];
    	}
    	calc_ineff(f, n);
    	int ans = solve(f, 0);
    	cout << ans << "\n";
    }
    return 0;
}

