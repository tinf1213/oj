#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int cnt = 0;
	scanf("%d", &n);
	while(1){
		if(n%10 == 7) cnt++;
		n /= 10;
		if(n == 0) break;
	}
	printf("%d\n", cnt);
	return 0;
}
