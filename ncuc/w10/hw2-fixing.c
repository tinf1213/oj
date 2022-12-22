#include<stdio.h>

struct time{
	int hour;
	int minute;
	double second;
};

int main(){	
	struct time start = {
		.hour = 12,
		.minute = 32,
		.second = 5.49
	};
	struct time end = {
		.hour = 15,
		.minute = 2,
		.second = 17.53
	};
	//靠夭浮點的整數不會補0 不爽了
	printf("%02d:%02d:%04.2f\n", start.hour, start.minute, start.second);
	printf("%02d:%02d:%04.2f\n", end.hour, end.minute, end.second);
	return 0;
}
