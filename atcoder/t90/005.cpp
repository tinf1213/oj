#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long

const ll mod = pow(10, 9) + 7;
int k, b, n;
vector<int> nums;
signed main(){
    cin >> n >> b >> k;
    for(int i=0;i<k;i++){
        int temp; cin >> temp;
        nums.push_back(temp);
    }
    ll dp[n+1][b];
    for(int i=0;i<=n;i++) for(int j=0;j<b;j++) dp[i][j] = 0;
    for(int i=0;i<k;i++) dp[1][nums[i]%b]++;
    for(int i=1;i<n;i++){
        for(int l=0;l<b;l++){
            for(int j=0;j<k;j++){
                int nex = ((l * 10) + nums[j]) % b;
                dp[i+1][nex] += dp[i][l];
                dp[i+1][nex] %= mod;
            }
        }
    }
    cout << dp[n][0] << endl;
    return 0;
}