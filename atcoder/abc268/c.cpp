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
        int tempa = abs(vec[i] - i);
        int tempb = n + 1 - vec[i] + i;
        if(tempa > tempb) dist.push_back(tempb);
        else dist.push_back(tempa);
    }
    //for(auto i:dist) cout << i;
    //auto m = minmax_element(dist.begin(), dist.end());
    //int index = distance(dist.begin(), m.second);
    vector<int> count(n, 0);
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
    int ta = calc(mark);
    int tb = calc(mark+1);
    int tc = calc(mark-1);
    cout << max(max(ta, tb), tc) << endl;
    //cout << mark << endl;
    return 0;
}