#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n,m; cin >> n >> m;
    map<ll,ll>mp;

    for(int i=1 ; i<=n ; i++)
    {
        ll val; cin >> val;
        mp[i]=val;
    }
    ll y,x,z;
    while(m--)
    {
        cin >> y >> x >> z;
        mp[y]-=z; mp[x]+=z;
    }

    for(int i=1 ; i<=n ; i++)
    {
        if(mp[i]<0)
        {
            cout << "NO\n"; return 0;
        }
    }
    cout << "YES\n";
}
