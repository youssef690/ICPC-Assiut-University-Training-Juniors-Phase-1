#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>s(n); for(int i=0 ; i<n ; i++) cin >> s[i];
    vector<int>v(n+1);
    int q; cin >> q;
    while(q--)
    {
        int x,y; cin >> x >> y;
        v[x-1]++; v[y]--;
    }
    for(int i=1 ; i<=n ; i++) v[i]+=v[i-1];
    int cntr=0;
    vector<int>ans;
    for(int i=0 ; i<n ; i++)
    {
        if(v[i]==0)
        {
            cntr++; ans.push_back(s[i]);
        }
    }
    cout << cntr << '\n';
    for(int i:ans) cout << i << " "; cout << '\n';
}
