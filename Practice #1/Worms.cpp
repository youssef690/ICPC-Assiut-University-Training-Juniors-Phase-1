#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   int n; cin >> n;
   vector<int>v(n), freq(2000005); for(int i=0 ; i<n ; i++) cin >> v[i];

   vector<pair<int,int>>p(n);
   p[0] = {1,v[0]};
   for(int i=1 ; i<=v[0] ; i++) freq[i]=1;

   for(int i=1 ; i<n ; i++)
   {
       p[i] = {p[i-1].second+1, p[i-1].second+v[i]};
       for(int j = p[i].first; j<=p[i].second; j++)
       {
           freq[j]=i+1;
       }
   }

   int m,x; cin >> m;
   while(m--)
   {
       cin >> x;
       cout << freq[x] << '\n';
   }
}
