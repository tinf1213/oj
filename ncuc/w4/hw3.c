#include<stdio.h>

int isleap(int year){
	if(year % 4 != 0) return 0;
	if(year % 100 == 0 && year % 400 != 0) return 0;
	return 1;
}

int main(){
	int year, month, day;
	int counter = 0;
	scanf("%d%d%d", &year, &month, &day);
	int leap = isleap(year);
	int days[13];
	//printf("%d\n", leap);
	for(int i=1;i<=7;i+=2) days[i] = 31;
	for(int i=2;i<=6;i+=2) days[i] = 30;
	for(int i=8;i<=12;i+=2) days[i] = 31;
	for(int i=9;i<=11;i+=2) days[i] = 30;
	days[2] = 28;
	if(leap) days[2] = 29;
	for(int i=1;i<month;i++) counter += days[i];
	counter += day;
	printf("%d\n", counter);
	return 0;
}
