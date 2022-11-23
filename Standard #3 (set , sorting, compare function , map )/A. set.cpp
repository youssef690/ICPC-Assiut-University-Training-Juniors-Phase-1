#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int q; cin >> q;
    set<int>st;
    while(q--)
    {
        string s;cin >> s; int x; cin >> x;
        if(s=="insert") st.insert(x);
        else if(s=="find")
        {
            if(st.find(x)==st.end()) cout << "not found\n";
            else cout << "found\n";
        }
        else if(s=="lower_bound")
        {
            if(st.lower_bound(x)==st.end()) cout << -1 << '\n';
            else cout << *st.lower_bound(x) << '\n';
        }
        else if(s=="upper_bound")
        {
            if(st.upper_bound(x)==st.end()) cout << -1 << '\n';
            else cout << *st.upper_bound(x) << '\n';
        }
    }
}
