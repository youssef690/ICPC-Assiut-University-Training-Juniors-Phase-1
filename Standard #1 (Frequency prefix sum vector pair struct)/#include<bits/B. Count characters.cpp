#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main ()
{
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 	
 	string s; cin >> s;
 	sort(s.begin() , s.end());

 	int freq[123] = {0};
 	for(char i : s) freq[i]++;
 	for(char i : s)
 	{
 		if(freq[i]==-1) continue;
 		else
 		{
 			cout << i << " " << freq[i] << "\n";
 			freq[i]=-1;
 		}
 	}
}
