#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    stack<string>s;
    bool c = true;
    int cc=0;
    while(n--)
    {
    	string x; cin >> x;
    	if(x!="Header" && c==true){cout << "WA\n"; return 0;}
    	c=false;
    	if(x=="Header"){cc++;}
    	if(cc!=1){cout << "WA\n"; return 0;}
    	if(s.empty()){s.push(x);}
    	else
    	{
    		if(x=="End"+s.top()) {s.pop();}
    		else{s.push(x);}
    	}
    }
    if(s.empty()){cout << "ACC\n";}
    else{cout << "WA\n";}
}
