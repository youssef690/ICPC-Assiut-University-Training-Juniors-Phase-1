#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,q; cin >> n >> q;
    map<string,ll>mp;

    while(n--)
    {
        string s; cin >> s; int x; cin >> x;
        mp[s]=x;
    }

    while(q--)
    {
        int x; cin >> x;
        if(x==1)
        {
            string s; cin >> s; ll y; cin >> y;
            mp[s]+=y;
        }
        else
        {
            string s; cin >> s;
            cout << mp[s] << '\n';
        }
    }
}
