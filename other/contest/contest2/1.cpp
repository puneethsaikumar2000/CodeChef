#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n, s;
		cin>>n>>s;
		int avail = 100 - s;
		vector<int> p(n);
		for (int i = 0; i < n; i++)
		{
			cin>>p[i];
		}
		int def_min = 100;
		int for_min = 100;
		for (int i = 0; i < n; ++i)
		{
			int j;
			cin>>j;
			if (j == 0){
				def_min = min(def_min, p[i]);
			}
			if (j == 1){
				for_min = min(for_min, p[i]);
			}
		}
		if (def_min + for_min <= avail){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}

	}
	return 0;
}