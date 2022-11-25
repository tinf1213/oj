#include<bits/stdc++.h>
using namespace std;
#define No cout << "No" << endl;
#define Yes cout << "Yes" << endl;
int n, m, t;
signed main(){
	cin >> n >> m >> t;
	vector<int> bonus(n, 0);
	vector<int> time(n, 0);
	for(int i=1;i<n;i++) cin >> time[i];
	for(int i=0;i<m;i++){
		int a, b; cin >> a >> b;
		bonus[a] = b;
	}
	for(int i=1;i<n;i++){
		t += bonus[i];
		t -= time[i];
		cout << t << endl;
		if(t < 0){
			No;
			return 0;
		}
	}
	Yes;
	return 0;
}

