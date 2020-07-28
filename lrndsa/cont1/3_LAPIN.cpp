#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

#define pb push_back;
#define mp make_pair;
#define ff first;
#define ss second;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		map<char, int> m1, m2;
		for (int i = 0; i < n/2; ++i)
		{
			if (m1.find(s[i]) == m1.end())
				m1[s[i]] = 0;
			m1[s[i]] += 1;
		}
		int k = 0;
		if (n % 2 == 0){
			k = n / 2;
		}
		else{
			k = n/2 + 1;
		}
		for (int i = k; i < n; ++i)
		{
			if (m2.find(s[i]) == m2.end())
				m2[s[i]] = 0;
			m2[s[i]] += 1;
		}
		bool ans = true;
		for (int i = 0; i < n / 2; ++i)
		{
			if (m1[s[i]] != m2[s[i]]){
				ans = false;
				break;
			}
		}
		if (ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
