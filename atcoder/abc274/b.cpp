#include<bits/stdc++.h>
using namespace std;
int main(){
	int h, w; cin >> h >> w;
	vector<vector<char>> mp;
	for(int i=0;i<h;i++){
		vector<char> temp;
		for(int j=0;j<w;j++){
			char t; cin >> t;
			temp.push_back(t);
		}
		mp.push_back(temp);
	}
	for(int i=0;i<w;i++){
		int cnt = 0;
		for(int j=0;j<h;j++) if(mp[j][i] == '#') cnt++;
		cout << cnt << ' ';
	}
	cout << endl;
	return 0;
}
