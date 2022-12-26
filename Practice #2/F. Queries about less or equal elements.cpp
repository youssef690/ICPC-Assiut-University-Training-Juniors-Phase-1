#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,m; cin >> n >> m;

    vector<ll>a(n);
    for(int i=0 ; i<n ;i++)
    {
    	cin >> a[i];
    }

	vector<ll>b(m);
    for(int i=0 ; i<m ;i++)
    {
    	cin >> b[i];
    }
    sort(a.begin(),a.end());

    for(int i=0 ; i<m ; i++)
    {
    	if(b[i]<a[0]) cout << 0 << " ";
    	else if(b[i]>=a[n-1]) cout << n << " ";
    	else
    	{
    		int x = b[i];
    		auto res = upper_bound(a.begin() , a.end() , x);
    		int zeft = res - a.begin();
    		cout << zeft << " ";
    	}
    }
    cout << "\n";
}
