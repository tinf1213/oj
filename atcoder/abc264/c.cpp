#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

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
    for(int i=0;i<(1<<h1);i++){
        for(int j=0;j<(1<<w1);j++){
            vector<int> hvec, wvec;
            for(int k=0;k<h1;k++) if(!(i&(1<<k))) hvec.push_back(k);
            for(int k=0;k<w1;k++) if(!(j&(1<<k))) wvec.push_back(k);

            if(hvec.size() != h2 or wvec.size() != w2) continue;

            bool flag = true;
            for(int k=0;k<h2;k++){
                for(int l=0;l<w2;l++){
                    if(mp1[hvec[k]][wvec[l]] != mp2[k][l]){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}