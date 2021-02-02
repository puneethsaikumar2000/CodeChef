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

int preced(char c){
	if (c == '^') return 3;
	else if (c == '*' || c == '/') return 2;
	else if(c == '+' || c == '-') return 1; 
    else return -1; 
}

void solve(){
	// cout << "running1\n";
	int n;
	cin >> n;
	// cout << "running\n";
	string s;
	cin >> s;
	stack<char> st;
	// cout << "running\n";
	REPN(i, n){
		// cout << i << "\n";
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
			cout << s[i];
		}
		else if (s[i] == '('){
			st.push(s[i]);
		}
		else if (s[i] == ')'){
			while (st.size() > 0 && st.top() != '('){
				char c = st.top();
				st.pop();
				cout << c;
			}
			if (st.top() == '(') st.pop();
		}
		else{
			if (st.size() == 0 or st.top() == '(' or preced(s[i]) > preced(st.top())){
				st.push(s[i]);
			}
			else{
				while (st.size() > 0 && st.top() != '(' and preced(s[i]) <= preced(st.top())){
					char c = st.top();
					st.pop();
					cout << c;
				}
				st.push(s[i]);
			}
		}
	}
	while (!st.empty()){
		char c = st.top();
		st.pop();
		cout << c;
	}
	cout << "\n";
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

