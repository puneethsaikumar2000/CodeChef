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
    	int k;
    	cin >> k;
    	char chess[8][8];
        memset(chess, 'X', sizeof(chess));
        int free = 0;
        for (int i = 0; i < 8 and free != k; ++i)
        {
            for (int j = 0; j < 8 and free != k; ++j)
            {
                chess[i][j] = '.';
                free += 1;
            }
        }
        chess[0][0] = 'O';
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                printf("%c", chess[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

