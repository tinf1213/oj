#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
#define No cout << "No" << endl;

#define Yes cout << "Yes" << endl;
typedef long long int ll;

signed main(){
    string s, t; cin >> s >> t;
    if(s.size() > t.size()){
        No;
    }    
    for(int i=0;i<s.size();i++){
        if(s[i] != t[i]){
            No;
            return 0;
        }
    }
    Yes;
    return 0;
}