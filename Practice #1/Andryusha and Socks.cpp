#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n; n*=2;
    map<int,int>mp;
    int res=1,cntr=0;

    while(n--)
    {
        int x; cin >> x;
        if(mp[x]==0)
        {
            mp[x]++;
            cntr++;
        }
        else
        {
            res = max(res, cntr);
            cntr--;
        }
    }
    cout << res << '\n';
}
