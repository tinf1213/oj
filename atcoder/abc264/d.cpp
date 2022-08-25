#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;

map<char, int> mp = {
    {'a', 1},
    {'t', 2},
    {'c', 3},
    {'o', 4},
    {'d', 5},
    {'e', 6},
    {'r', 7}
};

struct BIT{
    private:
        vector<int> bit;
    public:
        BIT(int n){
            bit.resize(n+1);
        }
}

int sumup(int n){
    
}

void add(){
    bit[i] = 1;
}

signed main(){
    io;
    string input; cin >> input;
    vector<int> dic(input.size());
    int ans = 0;
    for(int i=0;i<7;i++){
        dic[i+1] = mp[input[i]];
    }
    BIT b(dic.size());
    for(int i=0;i<dic.size();i++){
        ans += i - sumup(dic[i]);

    }

    
    
    return 0;
}