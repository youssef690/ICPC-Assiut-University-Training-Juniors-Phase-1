#include <bits/stdc++.h>

using namespace std;

void solve(){
    vector<pair<string, vector<int>>> commands;

    map<string, int> vars;
    map<string, int> vars2;
    int num = 0;

    string t, temp;

    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp == "define"){
            cin >> t; vars[t] = num; num += 1;
            commands.push_back(make_pair(temp,vector<int>{num}));
        }else if (temp == "print" or temp == "read") {
            cin >> t;
            commands.push_back(make_pair(temp,vector<int>{vars[t]}));
        }else{
            t = "";
            vector<int> g;
            for(int i=0; i<(int)temp.size(); i++){
                if (!(temp[i] == '=' || temp[i] == '+'))
                    t += temp[i];
                else{
                    g.push_back(vars[t]);
                    t = "";
                }
            }
            g.push_back(vars[t]);
            t = "";

            commands.push_back(make_pair("None", g));
        }
    }


    int n2; cin >> n2;
    num = 0;

    if (n2 != n) {
        cout << "NO" << endl;
        return;
    }else{
        for (int i = 0; i < n; i++){
            cin >> temp;
            if ((temp == "define" || temp ==  "print" or temp == "read") && commands[i].first != temp){
                cout << "NO" << endl;
                return;
            }

            if (temp == "define"){
                cin >> t; vars2[t] = num; num += 1;
            }else if (temp == "print" or temp == "read") {
                cin >> t;
                if (commands[i].second[0] != vars2[t]){
                    cout << "NO" << endl;
                    return;
                }
            }else{
                if (commands[i].first != "None"){
                    cout << "NO" << endl;
                    return;
                }

                t = "";
                vector<int> g;
                for(int i=0; i<(int)temp.size(); i++){
                    if (!(temp[i] == '=' || temp[i] == '+'))
                        t += temp[i];
                    else{
                        g.push_back(vars2[t]);
                        t = "";
                    }
                }
                g.push_back(vars2[t]);
                t = "";
                
                for (int j = 0; j < 3; j++){
                    if (g[j] != commands[i].second[j]){
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "YES" << endl;
}

int main(){
    solve();
}
