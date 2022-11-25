#include<stdio.h>

int main(){
	while(1){
		int n;
        	int cnt = 0;
        	int last = 0;
        	scanf("%d", &n);
		if(n == 0) break;	
		for(int i=2;i<=n;i++){
		if(n%i == 0){
		    n /= i;
		    i--;
		    if(last == i) cnt--;
		    cnt++;
		    last = i;
		    }
		}
		printf("%d\n", cnt);
	}
	return 0;
}
