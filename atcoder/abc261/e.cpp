#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

int data1[200000]; 
int data2[200000]; 

signed main(){
    int n,c; cin >> n >> c;
    for(int i=0;i,n;i++) cin >> data1[i] >> data2[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(data1[i] == 1) cout << c & data2[i] << endl;
            else if(data1[i] == 2) cout << c | data2[i] << endl;
            else cout << c ^ data2[i] << endl;
        }
    }
    return 0;
}