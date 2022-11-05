#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int q; cin >> q;
	
	priority_queue<int,vector<int>, std::greater<int>>s;
	while (q--)
	{
		string z; cin >> z;
		
		if (z == "top") cout << s.top() << '\n';
		else if (z == "pop") s.pop();
		else
		{
			int x; cin >> x;
			s.push(x);
		}
	}
}
