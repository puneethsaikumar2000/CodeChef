#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n, q;
		cin>>n>>q;
		vector<pii> p(n);
		for (int i = 0; i < n; i++)
		{
			cin>>p[i].first>>p[i].second;
		}

		// pair<pii, int> line1, line2, line3; // ax+by+c = 0 ((a,b),c)
		// line1.first.first = 0; // line1 is y = 0
		// line1.first.second = 1;
		// line1.second = 0;

		// line2.first.first = 1; // line2 is x-y-l = 0
		// line2.first.second = -1;

		// line3.first = make_pair(1,1); // line3 is x+y-r = 0
		while(q--){
			int l, r;
			cin>>l>>r;

			int count = 0;
			for (int i = 0; i < n; i++){
				int x = p[i].first;
				int y = p[i].second;
				if (y < 0 or y > ((r-l)/2)){
					continue;
				}

				if (x - y - l < 0){
					continue;
				}

				if (x + y - r > 0){
					continue;
				}

				count += 1;
			}
			cout<<count<<" ";
		}
		cout<<endl;
	}
	return 0;
}