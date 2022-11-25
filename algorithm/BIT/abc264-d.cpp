#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;
const int n = 7;

map<char, int> mp{
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
        BIT(void){
            bit.resize(n+1, 0);
        }

        int sumup(int x){
            int cnt = 0;
            for(int i=x;i>0;i-=i&-i) cnt+=bit[i];
            //cout << cnt << endl;
            return cnt; 
        }


        void update(int y){
            //for(auto i:bit) cout << i;
            //cout << endl;
            for(int i=y;i<=n;i+=i&-i) bit[i]++;
        }
};

signed main(){
    string input; cin >> input;
    vector<int>  stack;
    for(int i=0;i<n;i++) stack.push_back(mp[input[i]]);
    int ans = 0;
    BIT b;
    for(int i=0;i<n;i++){
        ans += i - b.sumup(stack[i]);
        //cout << ans << endl;
        b.update(stack[i]);
    }
    cout << ans << endl;
    return 0;
}