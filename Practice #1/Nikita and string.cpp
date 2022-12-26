#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    string s; cin >> s;
    s='.'+s;
    vector<int>a(5001), b(5001);
    for(int i=1 ; i<s.size() ; i++)
    {
        s[i]=='a'?a[i]++ : b[i]++;
    }
    for(int i=1 ; i<=s.size() ; i++)
    {
        a[i]+=a[i-1]; b[i]+=b[i-1];
    }
    int x=0,y=0,res=0;
    
    for(int i=0 ; i<=s.size(); i++)
    {
        for(int j=i ; j<=s.size(); j++)
        {
            x=a[s.size()]-a[j]+a[i];
            y=b[j]-b[i];
            res=max(res, x+y);
        }
    }
    cout << res << '\n';
}
 
