#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const long long Max = 1 << 18;
int main(){
	char Num[Max];
	int Times[10];
	scanf("%[^\n]", Num);	
	int lenth = strlen(Num);
	for(int i=0;i<10;i++) Times[i] = 0;
	for(int i=0;i<lenth;i++){
		if(Num[i] == ' ') continue;
		int temp = (int)(Num[i] - '0');
		Times[temp]++;
	}
	for(int i=0;i<lenth;i++){
		if(Num[i] == ' ') continue;
		int temp = (int)(Num[i] - '0');
		int time = Times[temp];
		if(time != 0){
			printf("%d %d\n", temp, time);
			Times[temp] = 0;
		}
	}
	return 0;
} 
