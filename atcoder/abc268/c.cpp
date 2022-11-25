#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;
int n;
vector<int> vec;
vector<int> dist;
int calc(int x){
    vector<int> temp;
    for(int i=x;i<n;i++) temp.push_back(vec[i]);
    for(int i=0;i<x;i++) temp.push_back(vec[i]);
    int cnt = 0;
    for(int j=0;j<n;j++){
            if(temp[(j-1)%n] == j or temp[(j+1)%n] == j or temp[j] == j) cnt++;
        }
    return cnt;
}
signed main(){
    io;
    cin >> n;
    vec.resize(n);
    for(int i=0;i<n;i++) cin >> vec[i];
    for(int i=0;i<n;i++){
        int tempa = vec[i] - i;
        int tempb = n + 1 - vec[i] + i;
        if(abs(tempa) > tempb) dist.push_back(tempb);
        else{
            if(tempa > 0) dist.push_back(tempa);
            else dist.push_back(n + tempa);
        }
    }
    for(auto i:dist) cout << i;
    /*vector<int> count(n, 0);
    for(int i=0;i<n;i++){
        count[dist[i]]++;
    }
    int mark = 0;
    int mx = -1;
    for(int i=0;i<n;i++){
        if(count[i] > mx){
            mx = count[i];
            mark = i;
        }
    }
    cout << calc(mark) << endl;*/
    return 0;
}