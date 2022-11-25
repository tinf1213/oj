#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int SumTwoArray(int *a1, int *a2){
	int sum = 0;
	for(int i=0;i<3;i++){
		sum += *a1;
		sum += *a2;
		a1++;
		a2++;	
	}
	return sum;
}

int main(){
	int arr1[3], arr2[3];
	for(int i=0;i<3;i++){
		int temp; scanf("%d", &temp);
		arr1[i] = temp;
	}
	for(int i=0;i<3;i++){
		int temp; scanf("%d", &temp);
		arr2[i] = temp;
	}
	int ans = SumTwoArray(arr1, arr2);
	printf("%d\n", ans);
	return 0;
}
