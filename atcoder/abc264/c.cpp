#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

vector<vector<int>> mark(0);

int pos(vector<vector<int>> mp, vector<int> sub){
    for(auto i:mp){

    }
}

signed main(){
    io;
    int h1, w1, h2, w2;
    cin >> h1 >> w1;
    vector<vector<int>> mp1(0);
    vector<vector<int>> mp2(0);
    vector<int> temp(w1, 0);
    for(int i=0;i<h1;i++){
        for(int j=0;j<w1;j++) cin >> temp[j];
        mp1.push_back(temp);
    } 
    cin >> h2 >> w2;
    vector<int> temp2(w2);
    for(int i=0;i<h2;i++){
        for(int j=0;j<w2;j++) cin >> temp2[j];
        mp2.push_back(temp2);
    }
    for(int i=0;i<h2;i++){
        int location = pos(mp1, mp2[i]);
    }


    return 0;
}