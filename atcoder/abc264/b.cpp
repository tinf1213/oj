#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long

signed main(){
    iou;
    int a,b; cin >> a >> b;
    int temp, add, color;
    bool status1, status2;
    if(a > 7 or b > 7) status1 = false;
    else status1 = true;
    if(a > b){
        status2 = true;
        temp = b;
        add = a - b;
    } 
    else{
        status2 = false;   
        temp = a;
        add = b - a;
    }
     
    if(temp % 2 == 0) color = 1;
    else color = 0;

    int reserve = 15 - temp;
    if(status2){
        if(temp > add){
            if ((add - temp) % 2 == 1) color *= -1;
        }
    }
    else{
        if(add % 2 == 1) color *= -1;
    }
    if(color == 1){
        cout << "black" << endl;
    }
    else{
        cout << "white" << endl;
    }
    return 0;
}