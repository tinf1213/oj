#include<stdio.h>

int main(){
	int n;
	float sal, sale, item, res, time;
	printf("請輸入薪資代碼: ");
	scanf("%d", &n);
	switch(n){
		case 1:
			printf("請輸入經理人員固定週薪: ");
			printf("該經理人員的週薪為: ");
			scanf("%f", &sal);
			printf("%.2f\n", sal);
			break;
		case 2:
			printf("請輸入時薪工每週工作時數: ");
			scanf("%f", &time);
			printf("請輸入每小時工資: ");
			scanf("%f", &sal);
			res = sal * time;
			printf("該時薪工的週薪為: ");
			printf("%.2f\n", res);
			break;
		case 3:
			printf("請輸入抽傭金工當週銷售金額: ");
			scanf("%f", &sale);
			printf("該抽傭金工的週薪為: ");
			printf("%.2f\n", sale*0.057 + 250);
			break;
		case 4:
			printf("請輸入零工當週生產的件數: ");
			scanf("%f", &item);
			printf("請輸入每件的計酬: ");
			scanf("%f", &sal);
			printf("該零工的週薪為: ");
			printf("%.2f\n", sal * item);
                        break;
	}
	return 0;
}

