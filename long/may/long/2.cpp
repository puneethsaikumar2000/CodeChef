#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		string s;
		cin >> s;
		vector<int> v(26,0);

		for (int i = 0; i < s.length(); ++i)
		{
			// printf("%i ", s[i] - 97);
			v[s[i] - 97]++;
		}
		// printf("\n");

		while(q--){
			int c;
			cin >> c;
			int cnt = 0;
			for (auto i = v.begin(); i != v.end(); ++i)
			{
				cnt += max(0, (*i) - c);
			}
			cout << cnt << endl;
		}
	}
	return 0;
}