#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,m ; cin >> n >> m;
    vector<int>v(n); for(int i=0 ; i<n ; i++) cin >> v[i];
    map<int,int>mp,xp;
    for(int i=n-1 ; i>=0 ; i--)
    {
        mp[v[i]]++;
        if(mp[v[i]]>1) xp[i]=0;
        else xp[i]=1;
    }
    vector<int>suf(n);
    suf[n-1]=xp[n-1];
    for(int i=n-2 ; i>=0 ; i--)
    {
          suf[i] = suf[i+1]+xp[i];
    }

    while(m--)
    {
        int x; cin >> x;
        cout << suf[x-1] << '\n';
    }
}
