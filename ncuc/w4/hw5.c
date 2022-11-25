#include<stdio.h>
int main(){
	int n;
	printf("請輸入一個數(1~9): ");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%dx%d=", j, i);
			int res = j*i;
			printf("%d", res);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
