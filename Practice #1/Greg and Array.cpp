#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n,m,k,l,r,d,x,y; cin >> n >> m >> k;
    vector<ll>v(100005); for(int i=1 ; i<=n ; i++) cin >> v[i];
    vector<pair<pair<ll,ll>,ll>>op(m+1);
    for(int i =1 ; i<=m ; i++)
    {
        cin >> l >> r >> d;
        op[i].first={l,r}; op[i].second=d;
    }
    vector<ll>A(100005);for(int i=1 ; i<=k ; i++)
    {
        cin >> x >> y;
        A[x]++; A[y+1]--;
    }
    vector<ll>B(100005);
    for(int i=1 ;i<=m ; i++)
    {
        A[i]+=A[i-1];
        B[op[i].first.first]+=(A[i]*op[i].second);
        B[(op[i].first.second)+1]-=(A[i]*op[i].second);
    }
    for(int i=1 ; i<=n ; i++)
    {
        B[i]+=B[i-1]; cout << B[i]+v[i] << " ";
    }
    cout << '\n';
}
