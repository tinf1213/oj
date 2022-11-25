#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char input[1<<18];
char clean[1<<18];

int isalpha(char test){
	int dig = (int)test;
	if(dig <= 122 && dig >= 97) return 1;
	return 0;	
}

void filter(int n){
	int index = 0;
	for(int i=0;i<n;i++){
		if(isalpha(input[i])){
			clean[index] = input[i];
			index++;
		} 
	}
}

int testPalindrome(int len){
	for(int i=0;i<len/2;i++){
		if(clean[i] != clean[len-1-i]) return 0;
	}
	return 1;
}

int main(){
	scanf("%[^\n]", input);
	int len = strlen(input);
	filter(len);
	len = strlen(clean);
	if(testPalindrome(len)) printf("1\n");
	else{
		printf("0\n");
	}
	return 0;
}
