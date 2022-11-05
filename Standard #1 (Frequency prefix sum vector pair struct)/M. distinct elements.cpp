#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n, q; cin >> n >> q;

	vector<int>v(200005);
	vector<int>vis(200005);

	loop(i, n)
	{
		int val; cin >> val;
		if (!vis[val])
		{
			v[val]++; vis[val] = 1;
		}
	}
	for (int i = 1; i < 200005; i++) v[i] += v[i - 1];
	while (q--)
	{
		int x; cin >> x;
		cout << v[x-1] << " " << v[200004]-v[x] << "\n";
	}
}
