#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		int nums = 2*i-1;
		for(int j=0;j<n-i;j++) printf(" ");
		for(int j=0;j<nums;j++) printf("*");
		printf("\n");
	}
	for(int i=n-1;i>=1;i--){
		int nums = 2*i-1;
		for(int j=0;j<n-i;j++) printf(" ");
		for(int j=0;j<nums;j++) printf("*");
		printf("\n");
	}

	return 0;
}
