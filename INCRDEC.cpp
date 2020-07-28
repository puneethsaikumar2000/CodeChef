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

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// #define int long long;

int main(int argc, char const *argv[])
{
    fastio;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vi v(n);
        map<int, int> m;
        int pos = 1;
        bool poss = true;
        vi right;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (m[v[i]] == 0){
                m[v[i]] = 1;
            }
            else{
                m[v[i]] += 1;
                pos = 0;
                right.push_back(v[i]);
            }
            if (m[v[i]] > 2)
                poss = false;
        }
        sort(v.begin(), v.end());
        sort(right.begin(), right.end(), greater<int>());
        // cout << "m::";
        // for (auto i : m){
        //     cout << i.first << " ";
        // }
        // cout << endl;
        if (not(poss)){
            cout << "NO" << endl;
            continue;
        }
        if (pos == 0){
            if (m[v[v.size() - 1]] > 1){
                cout << "NO" << endl;
                continue;
            }
            cout << "YES" << endl;
            for (auto i : m){
                cout << i.first << " ";
            }
            for (auto i : right){
                cout << i << " ";
            }
            cout << endl;
        }
        else if(pos == 1){
            cout << "YES" << endl;
            for(auto i : v)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}