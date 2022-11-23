#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n,k; cin >> n >> k;
    string s; cin >> s;
    vector<int>v(26);
    for(auto i:s) v[i-'a']++;

    int smaller = 26;
    for(int i=0 ; i<26 ; i++)
    {
        if(k>=v[i]) k-=v[i];
        else
        {
            smaller = i; break;
        }
    }

    string res;
    int z=k;

    for(auto j:s)
    {
        int a = j-'a';
        if(a>smaller || (a==smaller&&z==0)) res.push_back(j);
        else if(a==smaller) z--;
    }
    cout << res << '\n';
}
