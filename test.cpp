#include<bits/stdc++.h>
using namespace std;

unsigned cal(unsigned int a){
    a >>= 1;
    cout << a << endl;
    return a;
}

int main(){
    unsigned int x; cin >> x;
    cal(x);
    return 0;
}
