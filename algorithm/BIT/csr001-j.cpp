#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(0), cin.tie(0);
typedef long long int ll;

int n;

struct BIT{
    private:
        vector<int> bit;
    public:
        BIT(void){
            bit.resize(n+1);
        }
        int sumup(int x){
            int temp = 0;
            for(int i=x;i>0;i-=i&-i){
                temp += bit[i];
            }
            return temp;
        }

        void update(int y){
            for(int i=y;i<=n;i+=i&-i) bit[i]++;
        }
};

signed main(){
    cin >> n;
    vector<int> data(n);
    for(int i=0;i<n;i++) cin >> data[i];
    BIT b;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += i - b.sumup(data[i]);
        b.update(data[i]);
    }
    cout << ans << endl;

    return 0;
}

//https://atcoder.jp/contests/chokudai_s001/tasks/chokudai_S001_j