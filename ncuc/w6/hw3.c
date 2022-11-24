#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char input[1<<18];
int nums[1<<18];
int rec[1<<18];
int index = 0;
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
	nums[index] = temp;
	index++;
}

void avg(){
	float sum = 0;
	for(int i=0;i<index;i++){
		sum += nums[i];
		if(nums[i] > max) max = nums[i];
	}
	float avg = sum / (float)index;
	printf("平均數: = ");
	printf("%d\n", (int)avg);
}

void mid(){
	printf("中位數: = ");
	if(index % 2 == 1){
		printf("%d\n", nums[(index-1)/2]);
	}
	else{
		float mid = (nums[index/2] + nums[index/2-1]) / 2;
		printf("%d\n", (int)mid);
	}
}

void init_rec(){
	for(int i=0;i<=max;i++){
		rec[i] = 0;
	}
}

void mode(){
	int times= -1;
	int mark = 0;
	for(int i=0;i<index;i++){
		rec[nums[i]]++;
	}
	for(int i=0;i<=max;i++){
		if(rec[i] > times){
			times = rec[i];
			mark = i;
		} 
	}
	printf("眾數: = ");
	printf("%d\n", mark);
}

int main(){
	scanf("%[^\n]", input);
	char2num();
	avg();
	mid();
	init_rec();
	mode();
	return 0;
}
