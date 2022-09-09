#include<bits/stdc++.h>
using namespace std;
#define No cout << "No" << endl;
#define Yes cout << "Yes" << endl;
int n, m, t;
signed main(){
	cin >> n >> m >> t;
	vector<int> bonus(n+1, 0);
	vector<int> time(n+1, 0);
	for(int i=1;i<n;i++) cin >> time [i];
	for(int i=0;i<m;i++){
		int a, b; cin >> a >> b;
		bonus[a] = b;
	}
	t += bonus[1];
	for(int i=1;i<n;i++){
		if(t<=0 and i != n-1){
			No;
			return 0;
		}
		t -= time[i];
		t += bonus[i+1];
	}
	Yes;

	return 0;
}

