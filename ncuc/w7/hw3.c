#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}

int main(){
	int a, b; scanf("%d%d", &a, &b);
	printf("a = %d", a);
	printf(", ");
	printf("b = %d\n", b);
	printf("After swap.\n");
	swap(&a, &b);
	printf("a = %d", a);
	printf(", ");
	printf("b = %d\n", b);
	return 0;
}
