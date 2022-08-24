#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

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
    vector<int> dic(7);
    string input; cin >> input;
    for(int i=0;i<7;i++){
        dic[i] = mp[input[i]];
    }
    
    
    return 0;
}