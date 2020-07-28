#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n, m, q;
		cin>>n>>m>>q;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		
		while(q--){
			int pos, val;
			cin>>pos>>val;
			pos -= 1;
			a[pos] = val;
		}
	}
	return 0;
}