#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll l,r,n,q; cin >> n >> q;
    vector<ll>v(n+1), par(n+2), no(n+2); for(int i=1 ; i<=n ; i++) cin >> v[i];
    map<int,int>mp;

    while(q--)
    {
        cin >> l >> r;
        par[l]++;
        no[r+1]+=(r-l+1);
        mp[r+1]++;
    }

    ll x=0, cntr=0;
    for(int i=1 ; i<=n ; i++)
    {
        if(par[i]>0) {x+=par[i];}
        if(no[i]>0){x-=mp[i];cntr-=no[i];}
        cntr+=x;
        v[i]+=cntr;
        cout << v[i] << " ";
    }
}
