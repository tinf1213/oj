#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;
int n, m;
vector<int> line;
vector<int> data;
signed main(){
    cin >> n >> m;
    line.resize(n+1, 0);
    data.resize(n+1, 0);
    for(int i=0;i<n;i++){
	    int a, b; cin >> a >> b;
	    line[a]++;
	    line[b]++;
	    data[a] = b;
    }
    int cnt1 = 0;
    int mark;
    for(int i=1;i<=n;i++){
	    if(line[i] > 2 or line[i] == 0){
		    cout << "No" << endl;
		    return 0;
	    }
	    else if(line[i] == 1){
		    mark = i;
		    cnt1++;
	    }
    }
    cnt = 0;
    if(cnt1 != 2) cout << "No" << endl;
    else{
	    while(true){
		
    return 0;
}
