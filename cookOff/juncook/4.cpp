#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        long long n, c;
        cin >> n >> c;
        map<pii, vector<pii> > m;
        long long check = 0;
        long long moves = 0;
        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            m[make_pair(x - y, ((x % c) + c) % c)].emplace_back(x,y);
        }
        check = m.size();
        for (auto it : m){
            auto v = it.second;
            sort(v.begin(), v.end());
            auto med = v[v.size() / 2];
            for(auto j : v)
                moves += abs(j.first - med.first) / c;
        }
        printf("%i %lld\n", check, moves);
    }
    return 0;
}
