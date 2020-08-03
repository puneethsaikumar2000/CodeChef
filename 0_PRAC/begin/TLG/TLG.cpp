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


int main(int argc, char const *argv[])
{
    fastio;
    int n, s, t, cum_score[2] = {0}, lead[2] = {0};
    // lead[0] = lead[1] = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	cin >> s >> t;
    	cum_score[0] += s;
    	cum_score[1] += t;
    	if (cum_score[0] > cum_score[1])
    		lead[0] = max(lead[0], cum_score[0] - cum_score[1]);
    	else
    		lead[1] = max(lead[1], cum_score[1] - cum_score[0]);
    	// printf("%i  %i | %i  %i\n", cum_score[0], cum_score[1], lead[0], lead[1]);
    }
    if (lead[0] > lead[1])
    	cout << 1 << " " << lead[0] << "\n";
    else
    	cout << 2 << " " << lead[1] << "\n";
    return 0;
}

