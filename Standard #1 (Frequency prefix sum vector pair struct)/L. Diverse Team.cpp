#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n,k; cin >> n >> k;
	map<int, int>mp;
	set<int>st;
	
	loop(i, n)
	{
		int val; cin >> val;
		if (mp.find(val) == mp.end()) mp[val] = i+1;
		st.insert(val);
	}

	if (st.size() < k) { cout << "NO\n"; return 0; }

	cout << "YES\n";
	int cntr = 0;
	for (auto i : st)
	{
		cout << mp[i] << " ";
		cntr++;
		if (cntr == k)break;
		
	}
	cout << "\n";
}
