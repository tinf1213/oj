#include<stdio.h>
#include<math.h>
int main(){
	float weight;
	float height;
	scanf("%f%f", &weight, &height);
	float bmi = weight / pow(height, 2);
	printf("%f", bmi);
	if(bmi > 30) printf("，過重\n");
	else if(bmi < 18.5) printf("，過輕\n");	
	else printf("\n");
	return 0;
}
