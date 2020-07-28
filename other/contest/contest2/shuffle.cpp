#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		
		int swaped = n;
		while (swaped != 0){
			swaped = 0;
			for (int i = 0; i + k < n; i++){
				if (a[i] > a[i + k]){
					// swap a[i], a[i+k]
					int val = a[i];
					a[i] = a[i+k];
					a[i+k] = val;
					swaped += 1;
				}
			}
		}
		int sorted = true;
		for (int i = 0; i < n - 1; i++){
			if (a[i] <= a[i+1]){
				continue;
			}
			else{
				sorted = false;
			}
		}
		if (sorted){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}