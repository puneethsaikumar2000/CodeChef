#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;


int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a, b;
		cin >> a;
		cin >> b;
		if (a == b){
			cout << 0 << endl;
			continue;
		}
		map<char, vi> ma;
		map<char, vi> mb;
		set<char, greater<int> > sa, sb;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] == b[i])
				continue;
			ma[a[i]].push_back(i);
			mb[b[i]].push_back(i);
			sa.insert(a[i]);
			sb.insert(b[i]);
		}
		bool notposs = false;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] < b[i] or ma[b[i]].size() == 0){
				notposs = true;
				break;
			}
		}
		// cout << "notposs:: " << notposs << endl << "set : " ;
		// for (auto it1 = setDiff.begin(); it1 != setDiff.end(); ++it1)
		// {
		// 	cout << (*it1) << " ";
		// }
		// cout << endl;
		if (notposs){
			cout << -1 << endl;
			continue;
		}
		vector<char> va, vb;
		// cout << "va:: ";
		for (auto it = sa.begin(); it != sa.end(); it++){
			va.push_back((*it));
			// cout << (*it) << " ";
		}
		// cout << endl << "vb:: ";
		for (auto it = sb.begin(); it != sb.end(); it++){
			vb.push_back((*it));
			// cout << (*it) << " ";
		}
		// cout << endl;
		// for (int k = 0; k < vb.size(); k++){
		// 	if (ma[vb[k]].size() == mb[vb[k]].size()){
		// 		vi v1(ma[vb[k]]), v2(mb[vb[k]]);
		// 		for (int l = 0; l < v1.size(); l++){
		// 			if (v1[l] != v2[l])
		// 				break;
		// 		}
		// 		ma[vb[k]].clear();
		// 		mb[vb[k]].clear();
		// 		va.erase(find(va.begin(), va.end(), vb[k]));
		// 		vb.erase(find(vb.begin(), vb.end(), vb[k]));
		// 	}
		// }
		int i = 0;
		int j = 0;
		vector<pair<int, vector<int> > > ans;
		while (i < va.size() and j < vb.size()){
			set<int> s;
			// cout << "vb[j] : " << vb[j] << " "  << j << endl;
			while (va[i] >= vb[j] and i < va.size()){
				for (auto itr = ma[va[i]].begin(); itr != ma[va[i]].end(); ++itr){
					s.insert((*itr));
				}
				i += 1;
			}
			for (auto itr = mb[vb[j]].begin(); itr != mb[vb[j]].end(); ++itr)
			{
				s.insert((*itr));
			}
			j += 1;
			vector<int> v1;
			for (auto it2 = s.begin(); it2 != s.end(); it2++)
				v1.push_back((*it2));
			if (v1.size() == 1 and a[v1[0]] == b[v1[0]])
				continue;
			ans.push_back(make_pair(s.size(), v1));
			// cout << s.size() << " ";
			// for (auto itr1 = s.begin(); itr1 != s.end(); itr1++){
			// 	cout << (*itr1) << " ";
			// }
			// cout << endl;
		}
		cout << ans.size() << endl;
		for (auto i1 = ans.begin(); i1 != ans.end(); ++i1)
		{
			cout << (*i1).first << " ";
			for (auto itr1 = (*i1).second.begin(); itr1 != (*i1).second.end(); itr1++){
				cout << (*itr1) << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
