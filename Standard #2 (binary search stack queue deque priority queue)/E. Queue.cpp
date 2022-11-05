#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int q; cin >> q;
	queue<int>s;
	while (q--)
	{
		string z; cin >> z;
		
		if (z == "push")
		{
			int x; cin >> x;
			s.push(x);
		}
		else if (z == "front") cout << s.front() << '\n';
		else if (z == "back") cout << s.back() << '\n';
		else if (z == "pop") s.pop();
	}
}
