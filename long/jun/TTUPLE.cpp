#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

int solve(int p, int q, int r, int a, int b, int c){
    bool boo[3] = {p == a, q == b, r == c};
    int boo_cnt = boo[0] + boo[1] + boo[2];
    lli diff[3] = {a - p, b - q, c - r};
    bool mult[3];
    mult[0] = (a / p == (a * 1.0) / p);
    mult[1] = (b / q == (b * 1.0) / q);
    mult[2] = (c / r == (c * 1.0) / r);
    lli mul[3] = {a / p, b / q, c / r};

    // printf("p: %i q: %i r: %i\n", p, q, r);
    // printf("a: %i b: %i c: %i\n", a, b, c);
    // printf("%lli %lli %lli\n", mul[0], mul[1], mul[2]);
    // printf("%i %i %i\n", mult[0], mult[1], mult[2]);
    if (boo_cnt == 3){
        return 0;
    }
    else if (boo_cnt == 2){
        return 1;
    }
    else if (boo_cnt == 1){
        int x1, x2, y1, y2;
        if (boo[0]){
            x1 = q; x2 = b; y1 = r; y2 = c;
        }
        else if (boo[1]){
            x1 = p; x2 = a; y1 = r; y2 = c;
        }
        else{
            x1 = p; x2 = a; y1 = q; y2 = b;
        }
        if (x2 - x1 == y2 - y1){
            return 1;
        }
        else if ((x2*y1 == y2*x1) and ((x2 / x1) == ((x2 * 1.0) / x1))){
            return 1;
        }
        else{
            return 2;
        }
    }
    else{
        int ans = 3;
        // difference
        if (diff[0] == diff[1]){
            if (diff[0] == diff[2])
                return 1;
            return 2;
        }
        else if (diff[0] == diff[2]){
            return 2;
        }
        else if (diff[1] == diff[2]){
            return 2;
        }
        else{
            int mdiff = min(min(diff[0], diff[1]), diff[2]);
            lli p1 = p + mdiff, q1 = q + mdiff, r1 = r + mdiff;
            ans = min(ans, 1 + solve(p1,q1,r1,a,b,c));
        }
        // for (int i = 0; i < 3; ++i)
        // {
        //     lli p1 = p + diff[i], q1 = q + diff[i], r1 = r + diff[i];
        //     ans = min(ans, 1 + solve(p1,q1,r1,a,b,c));
        //     ans = min(ans, 1 + solve(p1,q,r,a,b,c));
        //     ans = min(ans, 1 + solve(p1,q1,r,a,b,c));
        //     ans = min(ans, 1 + solve(p1,q,r1,a,b,c));
        //     // ans = min(ans, 1 + solve(p,q1,r1,a,b,c));
        //     // ans = min(ans, 1 + solve(p,q1,r,a,b,c));
        //     // ans = min(ans, 1 + solve(p,q,r1,a,b,c));
        // }
        
        // multiply
        for (int i = 0; i < 3; ++i)
        {
            if (mul[i] != 0 and mult[i]){
                lli p1 = p * mul[i], q1 = q * mul[i], r1 = r * mul[i];
                ans = min(ans, 1 + solve(p1,q1,r1,a,b,c));
                ans = min(ans, 1 + solve(p1,q,r,a,b,c));
                ans = min(ans, 1 + solve(p1,q1,r,a,b,c));
                ans = min(ans, 1 + solve(p1,q,r1,a,b,c));
                // ans = min(ans, 1 + solve(p,q1,r1,a,b,c));
                // ans = min(ans, 1 + solve(p,q1,r,a,b,c));
                // ans = min(ans, 1 + solve(p,q,r1,a,b,c));
            }
        }
        return ans;
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int p, q, r, a, b, c;
        cin >> p >> q >> r;
        cin >> a >> b >> c;
        int ans = solve(p,q,r,a,b,c);
        printf("%i\n", ans);
    }
    return 0;
}