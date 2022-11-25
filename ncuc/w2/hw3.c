#include<stdio.h>
signed main(){
	int sec;
	scanf("%d", &sec);
	int min = sec / 60; 
	sec %= 60;
	int hour = min / 60;
	min %= 60;
	printf("%d : %d : %d\n", hour, min, sec);


	return 0;
}
