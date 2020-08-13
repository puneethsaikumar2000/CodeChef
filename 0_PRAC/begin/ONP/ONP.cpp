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

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	stack<char> st;
    	string ans = "";
    	for (int i = 0; i < s.length(); ++i)
    	{
    		// Assuming given is a rehular expression, with no abnormalities.
    		if (s[i] == '('){
    		}
    		else if (s[i] == ')'){
    			// closing brackets, so the pop the first mathematical expression in stack
    			char c = st.top();
    			st.pop();
    			cout << c;
    		}
    		else if (s[i] <= 'z' and 'a' <= s[i]){
    			// variables.
    			cout << s[i];
    		}
    		else{
    			// Mathematical expressions.
    			st.push(s[i]);
    		}
    	}
    	cout << "\n";
    }
    return 0;
}

