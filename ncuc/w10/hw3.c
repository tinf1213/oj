#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct HealthProfile{
       char first_name[1<<18];
       char last_name[1<<18];
       int gender;
       int year;
       int month;
       int day;
       double height;
       double weight;
       double BMI;
};

double pow(double a, int b){
	double ans = 1;
	for(int i=0;i<b;i++){
		ans *= a;
	}
	return ans;
}

void input(struct HealthProfile *profile){
	printf("Please input your lastname...\n");
	fgets(profile->last_name, 1<<18, stdin);
	printf("Please input your firstname...\n");
	fgets(profile->first_name, 1<<18, stdin);
	printf("Please input your sex(0 for male/1 for female)...\n");
	scanf("%d", &profile->gender);
	printf("Please input your birthday year...\n");
	scanf("%d", &profile->year);
	printf("Please input your birthday month...\n");
	scanf("%d", &profile->month);
	printf("Please input your birthday day...\n");
	scanf("%d", &profile->day);
	printf("Please input your height(cm)...\n");
	scanf("%lf", &profile->height);
	printf("Please input your weight(kg)...\n");
	scanf("%lf", &profile->weight);
}

void printstr(char target[]){
	int len = strlen(target);
	target--;
	for(int i=0;i<len;i++) printf("%c", target[i]);
}
int main(){
	struct HealthProfile profile;
	input(&profile);
	printf("Lastname: ");
	printstr(profile.last_name);
	printf(" ");
	printf("Firstname: ");
	printstr(profile.first_name);
	printf("\n");
	printf("Sex: ");
	if(profile.gender) printf("Female\n");
	else printf("Male\n");
	printf("Birthday: %4d/%02d/%02d\n", profile.year, profile.month, profile.day);
	printf("Height: %.2f Weight: %.2f\n", profile.height, profile.weight);
	profile.BMI = profile.weight / pow((profile.height)/100, 2);
	printf("BMI: %lf\n", profile.BMI);
	return 0;
}
