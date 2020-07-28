#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		int n, q;
		cin>>n>>q;
		int curr = 0;
		long long int floors = 0;
		for (int i = 0; i < q; i++){
			int f, d;
			cin>>f>>d;
			floors += abs(f - curr) + abs(d - f);
			curr = d;
			// cout<<floors<<" "<<abs(d - curr) + abs(d - f)<<endl;
		}
		cout<<floors<<"\n";
	}
	return 0;
}