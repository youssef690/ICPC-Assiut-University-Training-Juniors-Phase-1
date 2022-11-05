#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;


int bs(int low, int high, int key, vector<int>v) {
	while (low < high)
	{
		int mid = low + (high-low) / 2;
		if (v[mid] <= key)
		{
			low = mid + 1;
		}
		else
		{
			high = mid;
		}
	}
	return low;
}


int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int n; cin >> n;
	vector<int>v(n);

	loop(i, n) cin >> v[i];
	sort(v.begin(), v.end());

	int x, q; cin >> q;
	while (q--)
	{
		cin >> x;
		cout << bs(0, n, x, v) << '\n';
	}
}
