#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
//using int = long long int;

signed main(){
    iou;
    int n; cin >> n;
    int res[n][n];
    char temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> temp;
            if(temp == 'W'){
                res[i][j] = 1;
            }
            else if(temp == 'L'){
                res[i][j] = -1;
            }
            else{
                res[i][j] = 0;
            }
        }
    }    
    int flag = 1;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i+1;j--){
            if(res[i][j] + res[j][i] != 0){
                cout << "incorrect" << endl;
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }
    /*if(flag == 1){
        cout << "correct" << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << res[i][j];
        }
        cout << endl;
    }*/
    return 0;
}