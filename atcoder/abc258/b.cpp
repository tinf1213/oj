#include<bits/stdc++.h>
using namespace std;
#define iou ios_base::sync_with_stdio(0), cin.tie(0);
//#define int long long
 
int n;
vector<vector<int>> mp;
 
struct structa{
	public:
	        int x;
	        int y;
	        int value;
    };
 
structa scan(int x, int y){
    structa best;
    best.x = 0;
    best.y = 0;
    best.value = -1;
    vector<int> op{-1, 0, 1};
    for(int i=0;i<9;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                int tempx = x + op[j];
                int tempy = y + op[k];
                if (tempx == n) tempx -= n;
                if (tempy == n) tempy -= n;
                if (tempx < 0) tempx += n;
                if (tempy < 0) tempy += n;
                if(mp[tempx][tempy] > best.value){
                    best.value = mp[tempx][tempy];
                    best.x = tempx;
                    best.y = tempy;
                }
                    
             }
        }
    }
    mp[best.x][best.y] = -1;
    return best;
}
 
int main(){
	iou;
    structa m;
    m.x = 0;
    m.y = 0;
    m.value = -1;
    cin >> n;
    for(int i=0;i<n;i++){
        long long int line; cin >> line;
        vector<int> temp(n);
        for(int j=0;j<n;j++){
            temp[j] = line % 10;
            if(temp[j] > m.value){
                m.value = temp[j];
                m.x = i;
                m.y = n - 1 - j;
            }
            line /= 10;
        }
        reverse(temp.begin(), temp.end());
        mp.push_back(temp);
    }
    cout << m.value;
    //system("pause");
    int tempx = m.x;
    int tempy = m.y;
    //cout << tempx << tempy;
    mp[tempx][tempy] = -1;
    structa best;
    best.x = 0;
    best.y = 0;
    best.value = -1;
    for(int i=1;i<n;i++){
        best = scan(tempx, tempy);
        cout << best.value;
        tempx = best.x;
        tempy = best.y;
    }
    cout << endl;
    /*for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
			cout << mp[i][j]; 
		}
		cout << endl;
	}*/
    return 0;
}