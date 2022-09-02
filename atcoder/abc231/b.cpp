#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;
int n;
signed main(){
    cin >> n;
    map<string, int> mp;
    for(int i=0;i<n;i++){
	    string temp; cin >> temp;
	    mp[temp]++;
    }
    int max = -1;
    string mx;
    for(auto i:mp){
	if(i.second > max){
		max = i.second;
		mx = i.first;
	}
    }
    cout << mx << endl;
    return 0;
}
