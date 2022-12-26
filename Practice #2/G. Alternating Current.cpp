#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string ss; cin >> ss;
    stack<char>s;

    for(int i=0 ; i<ss.size() ; i++)
    {
    	if(s.empty())
    	{
    		s.push(ss[i]);
    	}
    	else if(s.top()==ss[i])
    	{
    		s.pop();
    	}
    	else
    	{
    		s.push(ss[i]);
    	}
    }
    if(s.empty()){cout << "Yes\n";}
    else
    {
    	cout << "No\n";
    }
}
