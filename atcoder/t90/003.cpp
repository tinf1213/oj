#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long
const int inf = 1 << 29;
int n;
vector<int> a(1 << 18);
vector<int> b(1 << 18);
vector<vector<int>> route((1 << 18), vector<int>(0));
int maxn, maxpos;

void getmaxpos(int start){
    queue<int> q;
    q.push(start);
    vector<int> dist(1 << 18);
    for(int i=0;i<=n;i++) dist[i] = inf;
    dist[start] = 0;   
    maxn = -1;
    maxpos = -1;
    while(!q.empty()){
        int pos = q.front(); q.pop();
        for(int i:route[pos]){
            if(dist[i] == inf){
                dist[i] = dist[pos] + 1;
                q.push(i);
                if(dist[i] > maxn){
                    maxn = dist[i];
                    maxpos = i;
                }
            }
        } 
    }
}


signed main(){
    cin >> n;
    for(int i=0;i<n-1;i++){
        cin >> a[i] >> b[i];
        route[a[i]].push_back(b[i]);
        route[b[i]].push_back(a[i]);
    }
    getmaxpos(1);
    getmaxpos(maxpos);
    //cout << pos << endl; 
    cout << maxn+1 << endl;
    return 0;
}