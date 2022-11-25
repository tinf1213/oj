#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char input[1<<18];
int nums[1<<18];
int index = 0;
int list[21];
int max = -1<<18;

void char2num(){
	int temp = 0;
	int cnt = 0;
	for(int i=strlen(input)-1;i>=0;i--){
		if(input[i] != ' '){
			temp += (int)(input[i] - '0') * pow(10, cnt);
			cnt++;
		}
		else{
			nums[index] = temp;
			index++;
			temp = 0;
			cnt = 0;
		}
	}
	//printf("%d ", temp);
	nums[index] = temp;
	index++;
}

void init_list(){
	for(int i=0;i<=20;i++){
		list[i] = 0;
	}
}

void fill_in(){
	for(int i=0;i<index;i++){
		list[nums[i]] = 1;
		if(nums[i] > max) max = nums[i];
	}
}

void output(){
	for(int i=1;i<=20;i++){
		if(list[i] == 1 && i != max){
			printf("%d, ", i);
		}
	}
	printf("%d", max);
}

int main(){
	scanf("%[^\n]", input);
	char2num();
	init_list();
	fill_in();
	printf("[");
	output();
	printf("]");
	return 0;
}
