#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long
int n;

signed main(){
    cin >> n;
    if (n%2 != 0) return 0;
    int bin = 0x00;
    for(int i=n;i>n/2;i--) bin += 1 << i-1;
    bin << n/2;
    int *ptr = &bin;
    cout << *(ptr << 1) << endl;
    return 0;
}