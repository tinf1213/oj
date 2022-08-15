#include<bits/stdc++.h>
using namespace std;
signed main(){
	int n,m; cin >> n >> m;
	map<int , int>mp;
	for(int i=0;i<n;i++){
		int temp; cin >> temp;
		mp[temp]++;
	}
	bool status = true;
	for (int i=0;i<m;i++){
		int temp; cin >> temp;
		if (mp[temp] == 0){
			status = false;
			break;
		}
		else{
			mp[temp]--;	
		}
	}
	if (status) cout << "Yes" << endl;
	else cout << "No" << endl;
 
 
	return 0;
}