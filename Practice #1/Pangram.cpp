#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	string s; cin >> s;
	bool vis[27] = {0};

	for(int i=0 ; i<n ; i++)
	{
		s[i] = tolower(s[i]);
		vis[s[i]-'a'+1]=1;
	}

	for(int i=1 ; i<27 ; i++)
	{
		if(vis[i]!=1)
		{
			cout << "NO\n"; return 0;
		}
	}
	cout << "YES\n";
}
