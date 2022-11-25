#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
#define int long long
int h, w;

signed main(){
    iou;
    cin >> h >> w;
    vector<int> row(0);
    vector<int> column(w, 0);
    vector<vector<int>> data(h, vector<int>(w));
    for(int i=0;i<h;i++){
        int temp = 0;
        for(int j=0;j<w;j++){
            cin >> data[i][j];
            temp += data[i][j];
            column[j] += data[i][j];
        }
        row.push_back(temp);
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout << column[j] + row[i] - data[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}