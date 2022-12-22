#include<stdio.h>

struct date{
	int year;
	int month;
	int day;
};

int main(){
	struct date holiday = {2004, 4, 26};
	struct date festival;
	int year, month, day;
	scanf("%d-%d-%d", &year, &month, &day);
	festival.year = year;
	festival.month = month;
	festival.day = day;
	printf("%02d/%02d/%4d\n", holiday.month, holiday.day, holiday.year);
	printf("%02d/%02d/%4d\n", festival.month, festival.day, festival.year);
 	

	return 0;
}
