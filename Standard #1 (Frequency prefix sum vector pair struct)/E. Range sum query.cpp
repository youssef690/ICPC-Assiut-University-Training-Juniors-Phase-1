#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll presum(ll x,ll y, ll zrr[])
{
	if(x==1) return zrr[y];
	else	 return zrr[y] - zrr[x-1];
}

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll n,q ; cin >> n >> q;
	const ll s=n;
	ll arr[s];
	
	for(int i=1 ; i<=s ; i++)
	{
		cin >> arr[i];	
	}
	
	ll brr[s] = {0};
	
	for(int i=1 ; i<=s ; i++)
	{
		brr[i] = arr[i] + brr[i-1];
	}
	
	while(q--)
	{
		ll l,r; cin >> l >> r;
	
		cout << presum(l,r,brr) <<endl;
	}
}
