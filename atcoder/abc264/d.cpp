#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;

map<char, int> mp = {
    {'a', 0},
    {'t', 1},
    {'c', 2},
    {'o', 3},
    {'d', 4},
    {'e', 5},
    {'r', 6}
};

signed main(){
    io;
    string input; cin >> input;
    vector<int> dic(input.size());
    int ans = 0;
    for(int i=0;i<7;i++){
        dic[i] = mp[input[i]];
    }
    //for(auto i:dic) cout << i;
    for(int i=0;i<7;i++){
        for(int j=0;j<i;j++){
            if(dic[j] > dic[i]) ans++;
        }
    }
    cout << ans << endl;

    
    
    return 0;
}