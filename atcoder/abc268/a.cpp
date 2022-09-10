#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;

signed main(){
    vector<int> vec(5, -1);
    vector<int> l;
    int cnt = 0;
    for(int i=0;i<5;i++){
        int temp; cin >> temp;
        for(int j=0;j<5;j++){
            if(temp == vec[j]){
                cnt--;
                break;
            }
        }
        vec[i] = temp;
        cnt++;
    } 
    cout << cnt << endl;

    return 0;
}