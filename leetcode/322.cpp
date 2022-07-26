#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> coins;
    int amount; cin >> amount;
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    vector<int> coin;
    int dp[amount + 1];
    int len = coins.size();
    for(int i=0;i<=amount;i++) dp[i] = 0;
    for(int i=0;i<len;i++){
        if(coins[i] < amount){
            coin.push_back(coins[i]);
            dp[coins[i]] = 1;
        } 
        else if(coins[i] == amount){
            return 1;
        }
    }
    if(coin.size() == 0){
        return -1;
    }
    len = coin.size();
    dp[0] = 0;
    int temp;
    for(int i=2;i<=amount;i++){
        for(int j=0;j<len;j++){
            if(i - coin[j] > 0){
                if(dp[i - coin[j]] != 0) temp = dp[i - coin[j]] + 1; 
            } 
            if(dp[i] == 0) dp[i] = temp;
            else dp[i] = min(temp, dp[i]);
        }
    }
    if(dp[amount] == 0) return -1;
    else return dp[amount];
}