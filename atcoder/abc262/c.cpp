#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
//#define int long long

int main(){
    int n; cin >> n;
    long long ans = 0;
    vector<int> data(n);
    long long same = 0;

    for(int i=0;i<n;i++){
        int temp; cin >> temp;
        temp--;
        data[i] = temp;
        if(temp == i) same++;
    }

    ans = (same - 1) * same / 2;
    for(int i=0;i<n;i++){
        if(data[i] > i and data[data[i]] == i){
            ans++;
        } 
    }
    cout << ans << endl;

    return 0;
}