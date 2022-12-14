#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t,x1,x2,y1,y2,mnx,mxx,mny,mxy, w,h,n; cin >> t;
    while(t--)
    {
        cin >> w >> h >> n;
        vector<vector<int>>grid(w+2, vector<int>(h+2,0));
        while(n--)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            mnx = min(x1,x2);mxx = max(x1,x2);
			mny = min(y1,y2);mxy = max(y1,y2);

            grid[mnx][mny]++;grid[mnx][mxy + 1]--;
			grid[mxx + 1][mny]--;grid[mxx + 1][mxy + 1]++;
        }

        for(int i=1 ; i<=w ; i++) for(int j=1 ; j<=h ; j++) grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1];

        int res=0;
        for(int i=1 ; i<=w ; i++) for(int j=1 ; j<=h ; j++) if(grid[i][j]==0)res++;
        cout << res << '\n';
    }
}
