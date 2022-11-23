#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(const pair<string, vector<int>> &a, const pair<string, vector<int>> &b)
{
    if (abs(a.second[0] - b.second[0])>10) return a.second[0] > b.second[0];
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n; cin >> n;
    vector<pair<string, vector<int>>>v(n);

    for(int i=0 ; i<n ; i++)
    {
        string s; cin >> s;
        int x, y, z, k; cin >> x >> y >> z >> k;
        int res = x + y + z + k;
        v[i].first = s;
        v[i].second.push_back(res); v[i].second.push_back(x); v[i].second.push_back(y); v[i].second.push_back(z); v[i].second.push_back(k);
    }
    sort(v.begin(), v.end(), comp);

    for (int i = 0; i<n; i++)
    {
        cout << v[i].first << " ";
        for (int j = 0; j < 5; j++) cout << v[i].second[j] << " ";
        cout << "\n";
    }
}
