#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=2;i<n/2;i++){
		if(n % i == 0){
			printf("%d", n);
			printf("不是質數\n");
			return 0;
		}
	}
	printf("%d", n);
	printf("是質數\n");


	return 0;
}
