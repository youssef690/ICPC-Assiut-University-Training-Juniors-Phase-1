#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   int n; cin >> n;
   vector<int>v(n), freq(200005);
   int mx = -1, maxnum=0, sm=INT_MAX;
   for(int i=0 ; i<n  ;i++)
   {
       cin >> v[i];freq[v[i]]++;
       mx = max(mx,freq[v[i]]);
       maxnum=max(maxnum, v[i]);
       sm=min(sm, v[i]);
   }


   while(mx)
   {
       for(int i=sm ; i<=maxnum ; i++)
       {
           if(freq[i]>0)
           {
               cout << i << " ";
               freq[i]--;
           }
       }
       cout << '\n';
       mx--;

   }
}
