#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    freopen("mex.in", "r", stdin);
    int t;cin >> t;
    while(t--)
    {
        int n,q; cin >> n >> q;
        vector<int>v(n); for(int i=0 ; i<n ; i++) cin >> v[i];
        map<int,int>mp; for(int i=0 ; i<n ; i++) mp[v[i]]=i+1;

        int x,y;
        while(q--)
        {
            cin >> x >> y;
            for(int i=1 ; i<=n+1 ; i++)
            {
                if(mp[i]<x || mp[i]>y || mp.find(i)==mp.end())
                {
                    cout << i << '\n'; break;
                }
            }
        }
    }
}
