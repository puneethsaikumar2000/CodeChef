#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--){
		long long int n, a;
		cin>>n>>a;
		long long int p = 1;
		long long int M[n][n];
		for (int i = 0; i < n; i++){
			for (int j = 0; j< n; j++){
				M[n][n] = a;
			}
		}

		for (int i = 0; i < n; i++){
			long long int p_i = 1;
			for (int j = 0; j < i; j++){
				p_i *= M[j][n - i - 1];
				M[i][j] = 0;
			}
			for (int j = n - 1 - i; j < n; j++){
				p_i *= M[i][j];
				M[i][j] = 0;
			}
			p += p_i;
			p = p % 1000000007;

			for (int i = 0; i < n; i++){
				for (int j = 0; j < n; j++){
					M[i][j] *= p_i;
					M[i][j] %= 1000000007;
				}
			}
		}
		cout<<p<<endl;
	}
	return 0;
}