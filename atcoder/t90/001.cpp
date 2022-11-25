#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long
int n,l,k;
int input[1 << 18];

bool solve(int prediction){
    int cnt = 0, last = 0;
    for(int i=0;i<n;i++){
        if(input[i] - last >= prediction and l - input[i] >= prediction){
            cnt++;
            last = input[i];
        }
    }
    if(cnt >= k) return 1;
    return 0;
}

signed main(){
    cin >> n >> l;  //input
    cin >> k;
    for(int i=0;i<n;i++){
        cin >> input[i];
    }

    int right = l + 1;
    int left = -1;
    while(right - left > 1){    //guessing answer
        int mid = (left + right) / 2;
        if(solve(mid)) left = mid;
        else right = mid;
    }
    cout << left << endl;
    return 0;
}