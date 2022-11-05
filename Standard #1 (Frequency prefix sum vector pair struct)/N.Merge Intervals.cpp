#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n; cin >> n;
	vector<pair < int, int >> v(n);
	int l, r;
	bool c = false;

	loop(i,n)
	{
		cin >> l >> r;
		v[i] = { min(l,r),max(l,r) };
	}
	
	sort(v.begin(), v.end());
	int x = v[0].first, y = v[0].second;

	for (int i = 1; i < n; i++)
	{
		if (v[i].first <= y)
		{
			y = max(y, v[i].second);
			x = min(x, v[i].first);
		}
		else
		{
			cout << x << " " << y << '\n';
			x = v[i].first; y = v[i].second;
		}
	}
	cout << x << " " << y << '\n';
}
