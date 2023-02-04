#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n; cin >>n;
    map<string,int>mp;

    string s;
    while(n--)
    {
        cin >> s;
        if(mp.find(s)==mp.end())
        {
            cout << "OK\n";
            mp[s]++;
        }
        else
        {
            cout << s<<mp[s] << "\n";
            mp[s]++;
        }
    }
}
