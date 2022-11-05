#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n, q; cin >> n >> q;
	vector<int>v(n);
	loop(i, n) cin >> v[i];
	sort(v.begin(), v.end());

	while(q--)
	{
		string s; cin >> s; int x; cin >> x;
		if (s == "binary_search")
		{
			if (binary_search(v.begin(), v.end(), x)) cout << "found\n"; else cout << "not found\n";
		}
		else if (s == "lower_bound")
		{
			auto c = lower_bound(v.begin(), v.end(), x);
			if (c == v.end()) cout << -1 << '\n';
			else cout << *c << '\n';
		}
		else if (s == "upper_bound")
		{
			auto c = upper_bound(v.begin(), v.end(), x);
			if (c == v.end()) cout << -1 << '\n';
			else cout << *c << '\n';
		}
	}
}
