#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int d;
		string s;
		cin>>d>>s;
		if (s == "POUNDS"){
			cout<<"$"<<d<<" CONVERTS TO "<<(0.84*d)<<" POUNDS\n";
		}
		else if (s == "LIRA"){
			cout<<"$"<<d<<" CONVERTS TO "<<(2040*d)<<" LIRA\n";
		}
		else if (s == "FRANCS"){
			cout<<"$"<<d<<" CONVERTS TO "<<(9.85*d)<<" FRANCS\n";
		}
		else if (s == "MARKS"){
			cout<<"$"<<d<<" CONVERTS TO "<<(3.23*d)<<" MARKS\n";
		}
		else if (s == "YEN"){
			cout<<"$"<<d<<" CONVERTS TO "<<(260*d)<<" YEN\n";
		}
	}
	
	return 0;
}