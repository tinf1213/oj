#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
//using int = long long int;
int bonus[5001];
int dp[5001][5001];

signed main(){
    //iou;
    int n,m; 
    cin >> n >> m;
    dp[0][0] = 0;
    int reward[n+1];
    for(int i=0;i<=5001;i++) bonus[i] = 0;
    for(int i=1;i<=n;i++) cin >> reward[i];
    for(int i=0;i<m;i++){
        int tempa, tempb; cin >> tempa >> tempb;
        bonus[tempa] = tempb;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i][j] = dp[i-1][j-1] + reward[i] + bonus[j];
        }
        dp[i][0] = 0;
        for(int j=0;j<i;j++)dp[i][0] = max(dp[i][0], dp[i-1][j]);
    }
    int ans = 0;
    for(int i=0;i<=n;i++)ans = max(ans, dp[n][i]);
    cout << ans << endl;

    return 0;
}