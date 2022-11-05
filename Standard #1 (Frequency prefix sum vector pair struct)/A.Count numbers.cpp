#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    
 	int n,q; cin >> n >> q;
 	int freq[n+9]={0};
 	int z,x;

 	while(q--)
 	{
 		cin >> z >> x;
 		if(z==1) freq[x]++;
 		else cout << freq[x] << "\n";
 	}
}
