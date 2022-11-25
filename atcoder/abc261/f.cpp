#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

int n;
int cnt = 0;

signed  main(){
    cin >> n;
    vector<int> color(n, 0);
    vector<int> integer(n, 0);
    for(int i=0;i<n;i++){
        cin >> color[i];
    }
    for(int i=0;i<n;i++){
        cin >> integer[i];
    }
    while(true){
        bool flag = false;
        for(int i=0;i<n-1;i++){
                if(integer[i] > integer[i+1]){
                    swap(integer[i], integer[i+1]);
                    swap(color[i], color[i+1]);
                    cnt += 1;
                    if(color[i] == color[i+1]) cnt -= 1;
                    flag = true;
                }
        }
        if(!flag){
            cout << cnt << endl;
            break;
        }
    }
    return 0;
}