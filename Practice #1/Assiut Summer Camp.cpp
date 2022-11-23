#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    vector<int>v(4);
    map<int,string>mp;

    while(t--)
    {
        for(int i=0 ; i<4 ; i++) cin >> v[i];
        mp[v[0]]="Hussien"; mp[v[1]]="Atef";mp[v[2]]="Karemo";mp[v[3]]="Ezzat";
        sort(v.begin(),v.end());
        cout <<  mp[v[3]]<< " " << mp[v[2]] << '\n';
    }
}
