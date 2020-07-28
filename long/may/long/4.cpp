#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

string to_binary(ull x){
	string s = "";
	while(x != 0){
		int rem = x % 2;
		if (rem == 0){
			s += '0';
		}
		else if (rem == 1){
			s += '1';
		}
		x /= 2;
	}
	reverse(s.begin(), s.end());
	// cout << x << " " << s << endl;
	return s;
}

string maximize_f(string sx, string sy){
	int i = 0, j = 0;
	string s = "";
	while(i < sx.length() and j < sy.length()){
		int remi = sx.length() - i;
		int remj = sy.length() - j;
		if (remi == remj){
			if (sx[i] == sy[j] and sx[i] == '0'){
				s += '0';
			}
			else{
				s += '1';
			}
			i++;
			j++;
		}
		else if (remi < remj){
			s += sy[j];
			j++;
		}
		else{
			s += sx[i];
			i++;
		}
	}
	while (s.length() != 0 and s[0] == '0'){
		s = s.substr(1);
	}
	// cout << "maximize_f :: " << s << endl;

	return s;
}

ull to_num(string s){
	ull x = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '0'){
			x *= 2;
		}
		else if (s[i] == '1'){
			x *= 2;
			x += 1;
		}
	}
	// cout << s << " to_num :: " << x << endl;
	return x;
}

void solve(ull l, ull r, ull z, ll n){
	ull pow2n = pow(2, n);
	ull pow2k = 1;
	ull z0 = z;
	while(!(z <= r)){
		z = z0;
		printf("z:: %llu \n", z);
		// while(z < pow2n){
		// 	n--;
		// 	pow2n /= 2;
		// }
		z -= pow2k;
		pow2k *= 2;
	}
	// ull pow2k = 1;
	// while (z + pow2k < r and z != pow2n-1){
	// 	z += pow2k;
	// 	pow2k *= 2;
	// }
	// printf("%llu %llu %lli\n", z, pow2n, n);
	if (z != 0 and z >= l)
		cout << z << endl;
	else
		cout << l << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		ull x, y, l, r;
		cin >> x >> y >> l >> r;
		string sx, sy, s;
		sx = to_binary(x);
		sy = to_binary(y);
		s = maximize_f(sx, sy);
		ull z = to_num(s);
		ll n = s.length();
		solve(l, r, z, n);
	}
	return 0;
}