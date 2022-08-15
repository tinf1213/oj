#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

signed main(){
    io;
    int n; cin >> n;
    vector<vector<bool>> mp;
    for(int i=0;i<n;i++){
        vector<bool> temp;
        string input; cin >> input;
        for(int j=0;j<n;j++){
            if(input[j] == '.') temp.push_back(0);
            else temp.push_back(1);
        }
        mp.push_back(temp);
    }

    bool flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int cnt = 0;
            if(j + 6 <= n and i + 6 <= n){
                for(int k=0;k<6;k++){
                    cnt += mp[i+k][j+k];
                }
                if(cnt >= 4) flag = 1;
                //cout << "a " << cnt << endl;
            }
            cnt = 0;
            if(i + 6 <= n and !flag){
                for(int k=0;k<6;k++){
                    cnt += mp[i+k][j];
                }
                if(cnt >= 4) flag = 1;
                //cout << "b " << cnt << endl;
            }
            cnt = 0;
            if(j + 6 <= n and !flag){
                for(int k=0;k<6;k++){
                    cnt += mp[i][j+k];
                }
                if(cnt >= 4) flag = 1;
                //cout << "c " << cnt << endl;
            }       
            if(j + 6 <= n and !flag and i - 6 >= 0){
                for(int k=0;k<6;k++){
                    cnt += mp[i-k][j+k];
                }
                if(cnt >= 4) flag = 1;
                //cout << "c " << cnt << endl;
            }    
            if(flag) break;
        }
        if(flag) break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
    
}