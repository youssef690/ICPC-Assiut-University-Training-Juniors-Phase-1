#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t;cin >> t;
    while(t--)
    {
        int n,q,x; cin >> n >> q;
        vector<int>v(n+1);

        while(q--)
        {
            cin >> x;
            for(int i=x ; i<=n ; i+=x)
            {
                if(i%x==0) v[i]=1;
            }
        }
        for(int i=1 ; i<=n ; i++) cout << v[i] << " "; cout << '\n';
    }
}
