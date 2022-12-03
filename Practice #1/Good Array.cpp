#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>v(n+1), freq(1e6+1);
    ll sum=0;
    for(int i=0 ; i<n ; i++)
    {
        cin >> v[i];
        sum+=v[i];
        freq[v[i]]++;
    }
    vector<int>ans;

    for(int i=0 ; i<n ; i++)
    {
        freq[v[i]]--;
        if((sum-v[i])%2==0 && (sum-v[i])/2<=1e6 && freq[(sum-v[i])/2]>0)
        {
            ans.push_back(i+1);
        }
        freq[v[i]]++;
    }

    cout << ans.size() << '\n';
    for(auto i:ans) cout << i << ' ';
    cout << '\n';
}
