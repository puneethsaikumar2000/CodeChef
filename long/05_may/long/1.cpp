#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		int prev = 0;
		cin >> prev;
		v[0] = prev;
		vector<int> gps;
		int gp = 0;
		gp++;
		for (int i = 1; i < n; ++i)
		{
			cin >> v[i];
			if (v[i] - prev <= 2){
				gp++;
			}

			else{
				gps.push_back(gp);
				gp = 1;
			}

			if (i == n-1){
				gps.push_back(gp);
			}

			prev = v[i];
		}
		int m = n, M = 0;
		for (auto i = gps.begin(); i != gps.end(); i++)
		{
			// printf("%i ", (*i));
			M = max(M, (*i));
			m = min(m, (*i));
		}
		// printf("\n");
		cout << m << " " << M << endl;

	}
	return 0;
}