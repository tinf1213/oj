#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
//using int = long long int;

signed main(){
    iou;
    int n; cin >> n;
    map<string, int> data;
    for(int i=0;i<n;i++){
        string temp;
        cin >> temp;
        int times = data.count(temp);
        if(times == 0){
            data.insert(pair<string, int>(temp, 1));
            cout << temp << endl;
        } 
        else{
            cout << temp << '(' << data[temp] << ')' <<endl;
            data[temp] += 1;
        }
    }
    return 0;
}