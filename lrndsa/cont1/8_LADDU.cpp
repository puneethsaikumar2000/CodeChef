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
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
    	int a;
    	string s;
		cin >> a >> s;
		long long int laddus = 0;
		for (int i = 0; i < a; ++i)
		{
			string a1;
			cin >> a1;
			if (a1 == "CONTEST_WON"){
				int r;
				cin >> r;
				laddus += 300;
				laddus += max(20-r, 0);
			}
			else if (a1 == "BUG_FOUND"){
				int sev;
				cin >> sev;
				laddus += sev;
			}
			else if (a1 == "TOP_CONTRIBUTOR"){
				laddus += 300;
			}
			else if (a1 == "CONTEST_HOSTED"){
				laddus += 50;
			}
		}
		if (s == "INDIAN")
			cout << laddus / 200 << endl;
		else
			cout << laddus / 400 << endl;
	}
    return 0;
}
