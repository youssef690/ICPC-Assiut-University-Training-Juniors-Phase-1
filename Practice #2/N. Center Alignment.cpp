#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}

int main()
{
    fast();
    string s;
    ll mx = 0;
    vector <string> lines;
    ll size;
    while (getline(cin, s))
    {
        size = s.size();
        mx = max(mx, size);
        lines.push_back(s);
        // cout <<s<<" "<< mx << endl;
    }
    
    for (int i = 0; i < mx + 2; i++)
        cout << '*';
    cout << endl;
    int l, r;
    int cont = 0;
    for (string x : lines)
    {
        int spaces = (mx - x.size() );
        if (spaces % 2 == 0)
            l = r = spaces / 2;
        else 
        {
            if (cont % 2 == 0)
            {
                l = spaces / 2;
                r = spaces / 2 + 1;
            }
            else
            {
                l = spaces / 2 +1;
                r = spaces / 2 ;
            }
            cont++;
        }
        cout << '*';
        for (int i = 0; i < l; i++)
            cout << ' ';
        cout << x;
        for (int i = 0; i < r; i++)
            cout << ' ';
        cout << '*';
        cout << endl;
    }
    for (int i = 0; i < mx + 2; i++)
        cout << '*';

    return 0;
}
