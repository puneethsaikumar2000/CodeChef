#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
// #define ff first
// #define ss second
// #define pb push_back
// #define mk make_pair
// #define maxn 300005
// #define mod 1000000007
// #define inf 1000000007

// typedef long long int lli;
// typedef unsigned long long int ulli;
// typedef vector<int> vi;
// typedef vector<lli> vlli;
// typedef pair<int, int> pii;
// typedef map<int, int> mii;

// #define int long long;
int n, q;
int queries[MAXN];
string s;

void solve(){
	n = s.length();
	stack<int> st;
	vector<int> m(n, -2);
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '(')
			st.push(i);
		else if (st.size() > 0)
			m[st.top()] = i, st.pop();
	}
	// int prev = m[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (s[i] == ')')
			m[i] = m[i + 1];
	}
	for (int i = 0; i < q; ++i)
	{
		cout << m[queries[i] - 1] + 1 << "\n";
	}
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    	cin >> s >> q;
    	for(int i = 0; i < q; i++){
    		cin >> queries[i];
    	}
    	solve();
    }
    return 0;
}
