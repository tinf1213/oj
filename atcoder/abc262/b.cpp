#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
//#define int long long

int cnt = 0;
int main(){
    int n; cin >> n;
    int m; cin >> m;
    vector<vector<bool>> status(n, vector<bool>(n));
    for(int i=0;i<m;i++){
        int tempa, tempb; cin >> tempa >> tempb;
        status[tempa-1][tempb-1] = status[tempb-1][tempa-1] = true;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(status[i][j] and status[j][k] and status[k][i]) cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}