#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		string ls, rs;
		ls = s.substr(1) + s[0];
		rs = s[s.length()-1] + s.substr(0,s.length()-1);
		if (ls == rs){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}