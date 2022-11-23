#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    string s1,s2; getline(cin,s1); getline(cin,s2);
    int cntr=0,sp=0;
    for(int i=0 ; i<s2.size() ; i++)
    {
        if(s2[i]==' ')
        {
            sp++;
            continue;
        }
        for(int j=0 ; j<s1.size() ; j++)
        {
            if(s1[j]==s2[i])
            {
                cntr++;
                s1[j]='*'; break;
            }
        }
    }
    
    if(cntr==s2.size()-sp) cout << "YES\n"; else cout << "NO\n";
}
