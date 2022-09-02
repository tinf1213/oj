#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;
int n,q;
vector<ll> a;
vector<ll> tar;
signed main(){
    cin >> n >> q;
    a.resize(n);
    tar.resize(q);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<q;i++) cin >> tar[i];
    sort(a.begin(), a.end());
    for(auto i:tar){
	    int s = 0;
	    int e = n + 1;
	    int mid;
	    if(i > a[n-1]){
		    cout << 0 << endl;
		    continue;
	    }
	    else if(i < a[0]){
		    cout << n << endl;
		    continue;
	    }
	    while(true){
		mid = (s + e) / 2;
		if(a[mid] == i){
			mid--;
			break;
		}
		else if(a[mid] > i) e = mid;
		else s = mid;
		if(a[mid] < i and a[mid+1] > i) break;
	    }
	    cout << n - mid - 1 << endl;
    }
    return 0;
}
