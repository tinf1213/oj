#include<stdio.h>
int algorithm(int n){
	int cnt = 0;
	while(n != 1){
                if(n % 2 == 1){
                        n = n * 3 + 1;
                }
                else{
                        n /= 2;
                }
                cnt++;
        }
	cnt++;
	return cnt;

}

int main(){
	int n, m;
	int max = -1;
	scanf("%d%d", &n, &m);
	for(int i=n;i<=m;i++){
		int length = algorithm(i);
		if(length > max) max = length;
	}
	printf("%d\n", max);
	return 0;
}
