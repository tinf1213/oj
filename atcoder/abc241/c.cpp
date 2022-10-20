#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long
#define yes cout << "Yes" << endl; return 0;
#define no cout << "No" << endl;
int n;

signed main(){
    io;
    cin >> n;
    vector<string> mp;
    string temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        mp.push_back(temp);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+5 < n){
                int cnt = 0;
                for(int k=1;k<=5;k++) if(mp[i+k][j] == '#') cnt++;
                if(cnt>=4) yes;
                if(j+5 < n){
                    cnt = 0;
                    for(int k=0;k<=5;k++) if(mp[i+k][j+k] == '#') cnt++;
                    if(cnt>=4) yes;
                } 
                if(j-5 >= 0){
                    cnt = 0;
                    for(int k=0;k<=5;k++) if(mp[i+k][j-k] == '#') cnt++;
                    if(cnt>=4) yes;
                }
            }
            if(i-5 >= 0){
                int cnt = 0;
                for(int k=0;k<=5;k++) if(mp[i-k][j] == '#') cnt++;
                if(cnt>=4) yes;
                if(j + 5 < n){
                    cnt = 0;
                    for(int k=0;k<=5;k++) if(mp[i-k][j+k] == '#') cnt++;
                    if(cnt>=4) yes;
                } 
                if(j-5 >= 0){
                    cnt = 0;
                    for(int k=0;k<=5;k++) if(mp[i-k][j-k] == '#') cnt++;
                    if(cnt>=4) yes;
                }
            }
            if(j+5 < n){
                int cnt = 0;
                for(int k=0;k<=5;k++) if(mp[i][j+k] == '#') cnt++;
                if(cnt>=4) yes;
            }
            if(j-5 >= 0){
                int cnt = 0;
                for(int k=0;k<=5;k++) if(mp[i][j-k] == '#') cnt++;
                if(cnt>=4) yes;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}