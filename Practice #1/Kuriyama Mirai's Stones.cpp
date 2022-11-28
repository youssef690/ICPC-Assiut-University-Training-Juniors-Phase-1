#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    vector<ll>v(n), cu(n); for(int i=0 ; i<n ; i++) {cin >> v[i]; cu[i]=v[i];}

    vector<ll>pre(n);
    pre[0]=v[0];
    for(int i=1 ; i<n ; i++) pre[i]=pre[i-1]+v[i];

    sort(cu.begin(),cu.end());
    for(int i=1 ; i<n ; i++) cu[i]+=cu[i-1];

    int m; cin >> m;
    while(m--)
    {
        int z,x,y; cin >> z >> x >> y;
        if(z==1)
        {
            if(x==1) cout << pre[y-1] << '\n';
            else cout << pre[y-1]-pre[x-2] << '\n';
        }
        else
        {
            if(x==1) cout << cu[y-1] << '\n';
            else cout << cu[y-1]-cu[x-2] << '\n';
        }
    }
}
