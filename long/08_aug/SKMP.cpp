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
	string s, p;
	cin >> s >> p;
	map<char, int> m;
	int n1 = s.length(), n2 = p.length();
	for (int i = 0; i < n1; ++i)
	{
		m[s[i]] += 1;
	}
	for (int i = 0; i < n2; ++i)
	{
		m[p[i]] -= 1;
	}
	string front = "";
	string last = "";
	for (auto it : m){
		if (it.first < p[0]){
			for (int i = 0; i < it.second; ++i)
			{
				front += it.first;
			}
		}
		else if (it.first == p[0]){
			if (p.size() >= 2){
				char c = p[0];
				for (int i = 1; i < p.size(); ++i)
				{
					if (p[i] != p[0]){
						c = p[i];
						break;
					}
				}
				if (c < p[0]){
					for (int i = 0; i < it.second; ++i)
					{
						last += it.first;
					}
				}
				else{
					for (int i = 0; i < it.second; ++i)
					{
						front += it.first;
					}
				}
			}
			else{
				for (int i = 0; i < it.second; ++i)
				{
					front += it.first;
				}
			}
		}
		else{
			for (int i = 0; i < it.second; ++i)
			{
				last += it.first;
			}
		}
	}
	string ans = front + p + last;
	cout << ans << "\n";
}

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	solve();
    }
    return 0;
}

