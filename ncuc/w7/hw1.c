#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void oper(int *ptr){
	for(int i=0;i<5;i++){
		*ptr += 10;
		ptr++;
	}
}

void output(int *ptr){
	for(int i=0;i<5;i++){
		printf("%d ", *ptr);
		ptr++;
	}
}

int main(){
	int arr[5] = {31,17,33,22,16};
	oper(arr);
	output(arr);
	return 0;
} 
