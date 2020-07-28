#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		float x;
		int e;
		cin>>x>>e;
		float ans = x * pow(10, e);
		printf("%.2f\n", ans);
	}
	
	return 0;
}