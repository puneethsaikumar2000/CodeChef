#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef pair<int, int> pii;
typedef map<int, int> mii;

// std::vector<char> alpha(26);
char alpha[26];

map<char, int> num;

void initialize(vector<map<char, int> > &m, string s){
    for (int i = 0; i < s.size(); i++){
        for (int j = 0; j < 26; j++)
            m[i][alpha[j]] = 0;
    }
    for (int i = 0; i < s.size(); i++){
        if (i == 0)
            m[i][s[i]] = 1;
        else{
            for (int j = 0; j < 26; j++)
                m[i][alpha[j]] = m[i-1][alpha[j]];
            m[i][s[i]] += 1;
        }
    }

}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    alpha[0] = 'A'; alpha[1] = 'B'; alpha[2] = 'C'; alpha[3] = 'D'; alpha[4] = 'E'; alpha[5] = 'F'; alpha[6] = 'G'; alpha[7] = 'H';
    alpha[8] = 'I'; alpha[9] = 'J'; alpha[10] = 'K'; alpha[11] = 'L'; alpha[12] = 'M'; alpha[13] = 'N'; alpha[14] = 'O'; alpha[15] = 'P';
    alpha[16] = 'Q'; alpha[17] = 'R'; alpha[18] = 'S'; alpha[19] = 'T'; alpha[20] = 'U'; alpha[21] = 'V'; alpha[22] = 'W'; alpha[23] = 'X';
    alpha[24] = 'Y'; alpha[25] = 'Z';
    
    num['A'] = 0; num['B'] = 1; num['C'] = 2; num['D'] = 3; num['E'] = 4; num['F'] = 5; num['G'] = 6; num['H'] = 7; num['I'] = 8;
    num['J'] = 9; num['K'] = 10; num['L'] = 11; num['M'] = 12; num['N'] = 13; num['O'] = 14; num['P'] = 15; num['Q'] = 16; num['R'] = 17;
    num['S'] = 18; num['T'] = 19; num['U'] = 20; num['V'] = 21; num['W'] = 22; num['X'] = 23; num['Y'] = 24; num['Z'] = 25;
    
    lli n, q;
    cin >> n;
    string s;
    cin >> s;
    int s_siz = s.size();
    cin >> q;
    vector<map<char, int> > m(s.size());
    initialize(m, s);
    while (q--){
        lli r;
        char c;
        cin >> r >> c;
        lli r1, r2;
        if (r % 2 == 0){
            r1 = r / 2;
            r2 = r - 1;
        }
        else{
            r1 = r;
            r2 = (r - 1) / 2;
        }
        int start = ((r1 % s_siz)*(r2 % s_siz) % s_siz);
        int end = (start + (r % s_siz)) % s_siz;
        // printf("%i %i\n", start, end);
        string s1;
        if (start != 0)
            s1 = s.substr(start) + s.substr(0, start);
        else
            s1 = s;
        cout << ((r / s_siz) * m[s_siz - 1][c]) + m[end - 1][c] << endl;
    }
    return 0;
}