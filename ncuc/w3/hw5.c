#include<stdio.h>
int main(){
	int n;
	int cnt = 0;
	scanf("%d", &n);
	while(1){
		if(!n) break;
		if(n%2 == 0) n/=2;
		else n--;
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
