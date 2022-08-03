#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
//#define int long long

int n;
//vector<vector<int>> map(n,vector<int>(n));

struct structa{
        int x;
        int y;
        int value;
    };

structa scan(vector<vector<int>> map, int x, int y){
    structa best;
    int op[3];
    op[1] = 1;
    op[2] = 0;
    op[3] = -1;
    best.value = -1;
    for(int i=0;i<8;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                int tempx = x + op[i];
                int tempy = y + op[j];
                if (tempx == n) tempx -= n;
                if (tempy == n) tempy -= n;
                if(map[tempx][tempy] > best.value){
                    best.value = map[tempx][tempy];
                    best.x = tempx;
                    best.y = tempy;
                }
                    
             }
        }
    }
    return best;
}

int main(){
    structa m;
    m.value = -1;
    cin >> n;
    vector<vector<int>> map(n,vector<int>(n));
    //int map[n][n];
    for(int i=0;i<n;i++){
        long long int temp;
        for(int j=0;j<n;j++){
            map[i][j] = temp % 10;
            if(map[i][j] > m.value){
                m.value = map[i][j];
                m.x = i;
                m.y = j;
            }
            temp /= 10;
        }
    }
    cout << m.value;
    int tempx = m.x;
    int tempy = m.y;
    for(int i=1;i<n;i++){
        structa best = scan(map, tempx, tempy);
        cout << best.value;
        map[best.x][best.y] = -1;
        //cout << 'a';
    }
    cout << endl;

    return 0;
}