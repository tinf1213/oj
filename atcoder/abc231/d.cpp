#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;
vector<int> cnt;
int n, m;
class ufind{
	private:
		vector<int> rank;
		vector<int> parent;
	public:
		ufind(int x){
			for(int i=0;i<x;i++) parent.push_back(i);
			rank.resize(x, 0);
		}
		void uni(int x, int y){
			if(rank[x] >= rank[y]){
				rank[x]++;
				parent[y] = x;
			}
			else{
				rank[y]++;
				parent[x] = y;
			}
		}
		int unifind(int x){
			while(parent[x] != x){
				parent[x] = parent[parent[x]];
				y = parent[x];
			}
			return y;
		}
};

int main(){
	io;
    	cin >> n >> m;
    	ufind(n);
	cnt.resize(n, 0);
	for(int i=0;i<n;i++){
	    int a, b; cin >> a >> b;
	    a--;
	    b--;
	    cnt[a]++;
	    cnt[b]++;
	    if(unifind(a) == inifind(b)){
	    	cout << "No" << endl;
		return 0;
	    }
	    uni(a ,b);
	}
	for(int i=0;i<n;i++){
		if(cnt[i] > 2){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;

    return 0;
}
