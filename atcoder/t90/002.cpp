#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long
int n;

bool verify(string temp){
    int counter = 0;
    for(int i=0;i<temp.size();i++){
        if(temp[i] == '(') counter++;
        else counter--;
        if(counter < 0) return false;
    }
    if(counter == 0) return true;
    return false;
}


signed main(){
    cin >> n;
    if (n%2 != 0) return 0;
    int bin = 0b00;
    for(int i=n;i>n/2;i--) bin += 1 << i-1;
    bin << n/2;
    for(int i=bin;i>=0;i--){
        string temp = "";
        for(int j=n-1;j>=0;j--){
            if(i & (1 << j)) temp += '(';
            else temp += ')';
        }
        bool flag = verify(temp);
        if(flag) cout << temp << endl;
    }
    return 0;
}