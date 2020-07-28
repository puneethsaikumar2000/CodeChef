#include <bits/stdc++.h>
using namespace std;

#define fastio          std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PAUSE_EXE       assert(false)
#define LL              long long
#define LD              long double
#define MAX             200005
#define MOD             1000000007LL
#define REP(i,n)        for(__typeof(n) i=0; i<n; ++i)
#define CREP(i,n)       for(__typeof(n) i=n-1; i>=0; --i)
#define MYREP(i,a,b)    for(__typeof(a) i=a; i<=b; ++i)
#define MYCREP(i,a,b)   for(__typeof(a) i=b; i>=a; --i)
#define SET(a, b)       memset(a, b, sizeof(a))
#define count_one(a)    __builtin_popcountll(a)
#define power_2(a)      (a)&(a-1)==0
#define sz(a)           int((a).size())
#define pb              push_back
#define mp              make_pair
#define fi              first
#define sec             second
#define all(c)          (c).begin(),(c).end()
#define allr(c)         (c).rbegin(),(c).rend()
#define loop(c,i)       for(typeof(c.begin()) i = c.begin(); i != c.end(); i++)

const double EPS = 1e-10;
const double PI = acos(-1.0);

#include <ctime>
double tick() {static clock_t oldtick;clock_t newtick=clock();double diff = 1.0*(newtick-oldtick)/CLOCKS_PER_SEC;oldtick = newtick;return diff;}

template <typename T> T mod(T a, T b) {return (a < b ? a : a % b);}
LL mulmod(LL a,LL b, LL m){LL q=(LL)(((LD)a*(LD)b)/(LD)m);LL r=a*b-q*m;if(r>m)r%=m;if(r<0)r+=m;return r;}
template <typename T, typename S>T expo(T e, S n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template <typename T>T power(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=mod(x*p,m);p=mod(p*p,m);n>>=1;}return x;}
template <typename T>T powerL(T e, T n, T m){T x=1,p=e;while(n){if(n&1)x=mulmod(x,p,m);p=mulmod(p,p,m);n>>=1;}return x;}
template <typename T> T InverseEuler(T a, T m){return (a==1? 1 : power(a, m-2, m));}
template <typename T> T gcd(T a, T b){return __gcd(a,b);}
template <typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    scanf("%d", &t);
    assert(t <= 10000000);
    LL a, b, ans;
    while (t--)
    {
        scanf("%lld %lld", &a, &b);
        assert (a>=1 && a<=1000000000);
        assert (b>=1 && b<=1000000000);
        if (gcd(a, b) == 1)
            ans = a*b - a - b + 1;
        else
            ans = -1;
        printf("%lld\n", ans);
    }
    return 0;
}

