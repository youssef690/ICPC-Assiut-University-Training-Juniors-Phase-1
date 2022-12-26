#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m; cin >> n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++)
    {
    	cin >> v[i];
    }
    sort(v.begin(),v.end());
    cin >> m;

    for(int i=0 ; i<m ; i++)
    {
    	int x; cin >> x;
    	if(x>=v[n-1]){cout << n << endl;}
    	else if(x<v[0]){cout << 0 <<endl;}
    	else
    	{
    		auto z = upper_bound(v.begin(),v.end(),x);
    		int c = z-v.begin();
    		cout << c <<endl;
    	}
    }
}
