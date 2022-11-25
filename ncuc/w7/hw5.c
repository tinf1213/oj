#include<stdio.h>
#include<stdlib.h>
#include<string.h>

double ans;

void add(double a, double b){
	ans = a + b;
	printf("+ ");
}

void sub(double a, double b){
	ans = a - b;
	printf("- ");
}

void mul(double a, double b){
	ans = a * b;
	printf("* ");
}

void divi(double a, double b){
	ans = a / b;
	printf("/ ");
}

void output(double b){
	printf("%.6lf = ", b);
	printf("%.6lf\n", ans);	
}

int main(){
	void (*p[4])(double, double);
	p[0] = &add;  
	p[1] = &sub;
	p[2] = &mul;
	p[3] = &divi;
	while(1){
		printf("Enter a number between 0 to 3(+,-,*,/), -1 to end: ");
		int n; scanf("%d", &n);
		if(n == -1){
			printf("Program End!\n");
			break;
		} 
		printf("Input two numbers to do the operand: ");
		double a, b; scanf("%lf%lf", &a, &b);
		printf("%.6lf ", a);
		p[n](a, b);
		output(b);
	}
	return 0;
}
