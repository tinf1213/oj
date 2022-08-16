#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

signed main(){
    int h1, w1, h2, w2;
    cin >> h1 >> w1;
    vector<vector<int>> mp1, mp2;
    vector<int> temp(w1);
    for(int i=0;i<h1;i++){
        for(int j=0;j<w1;j++) cin >> temp[i]
        mp1.push_back(temp);
    } 
    cin >> h2 >> w2;
    vector<int> temp(w2);
    for(int i=0;i<h2;i++){
        for(int j=0;j<w2;j++) cin >> temp[i];
        mp2.push_back(temp);
    }
    vector<int> mark(w2);
    return 0;
}