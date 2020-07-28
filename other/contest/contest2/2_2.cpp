#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int xa, xb, ya, yb;
		cin>>xa>>ya>>xb>>yb;
		if ((xa*xa) + (ya*ya) > (xb*xb) + (yb*yb)){
			cout<<"B IS CLOSER\n";
		}
		else{
			cout<<"A IS CLOSER\n";
		}
	}
	
	return 0;
}