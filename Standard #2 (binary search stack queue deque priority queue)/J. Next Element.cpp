#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n; cin >> n;
    stack<pair<int,int>>st; map<int,int>mp;

    for(int i=0 ; i<n ; i++)
    {
        int x; cin >> x;
        while(!st.empty() && x>st.top().first)
        {
            mp[st.top().second]=i+1;
            st.pop();
        }
        st.push({x,i});
    }
    int q; cin >> q;
    while(q--)
    {
        int val; cin >> val; 
        if(mp.find(val-1)==mp.end()) cout << -1 << '\n';
        else cout << mp[val-1] << '\n';
    }
}
