#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	// cout<<ceil(7.8)<<endl;
	while(t--){
		int x;
		cin>>x;
		float f = x/5000.0;
		int f1 = ceil(f);
		float l = x/2000.0;
		int l1 = ceil(l);
		float g = x/1000.0;
		int g1 = ceil(g);
		cout<<f1<<" BAG(S) FERTILIZER\n";
		cout<<l1<<" BAG(S) LIME\n";
		cout<<g1<<" BAG(S) SEED\n";
	}
	
	return 0;
}