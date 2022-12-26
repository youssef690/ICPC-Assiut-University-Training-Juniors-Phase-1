#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    int n=s.size();
    int p = 0;

    for(int i=0 ; i<s.size() ;i++)
    {
    	if(s[i]=='(')
    	{
    		p++;
    	}
    	else
    	{
    		p--;
    		if(p<0)
    		{
    			n--;
    			p=0;
    		}
    	}
    }
    cout << n - p << endl;
}
