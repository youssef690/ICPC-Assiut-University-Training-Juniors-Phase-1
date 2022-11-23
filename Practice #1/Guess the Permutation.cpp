#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    vector<vector<int>>v(n);
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            int val; cin >> val; v[i].push_back(val);
        }
    }

    vector<int>freq(51),vis(51);

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            freq[v[i][j]]++;
        }
        for(int x=1 ; x<=n ; x++)
        {
            if(n-x==freq[x] && vis[x]==0)
            {
                cout << x << " ";vis[x]=1; break;
            }
        }
        for(int z=0 ; z<n ; z++) freq[z]=0;
    }
    cout << '\n';
}
