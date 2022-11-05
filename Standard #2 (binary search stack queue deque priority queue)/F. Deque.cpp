#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int q; cin >> q;
	deque<int>s;
	while (q--)
	{
		string z; cin >> z;
		
		if (z == "push_back")
		{
			int x; cin >> x;
			s.push_back(x);
		}
		else if (z == "push_front")
		{
			int x; cin >> x;
			s.push_front(x);
		}
		else if (z == "pop_back") s.pop_back();
		else if (z == "pop_front")s.pop_front();
		else if (z == "front") cout << s.front() << '\n';
		else if (z == "back") cout << s.back() << '\n';
		else if (z == "print")
		{
			int x; cin >> x;
			cout << s.at(x-1) << '\n';
		}
	}
}
