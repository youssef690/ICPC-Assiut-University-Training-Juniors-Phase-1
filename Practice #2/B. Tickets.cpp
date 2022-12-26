#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    queue<int>q;

    while(n--)
    {
    	int x,y; cin >> x >> y;

    	if(x==1)
    	{
    		q.push(y);
    	}
    	else
    	{
    		
    		if(y==q.front())
    		{
    			cout << "Yes\n";
    		}
    		else
    		{
    			cout << "No\n";
    		}
    		q.pop();
    	}
    }
}
