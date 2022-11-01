#include<stdio.h>
signed main(){
	int a, b ,c;
	scanf("%d %d %d", &a, &b, &c); 
	int sum = a + b + c;
	int avg = sum / 3;
	int prod = a * b * c;
	int min;
	int max;
	if(a >= b){
	    if(b >= c){
		    min = c;
		    max = a;
	    }
	    else if(c >= a){
		    min = b; 
		    max = c;
	    }
            else{
		    min = b;
		    max = a;
	    }
	}
	else{
            if(a >= c){
		    min = c;
		    max = b;
	    }
	    else if(c >= b){
		    max = c; 
		    min = a;
	    }
	    else{
		    max = b;
		    min = a;
	    }
	}
	printf("Sum is ");
	printf("%d\n", sum);
	printf("Average is ");
	printf("%d\n", avg);
	printf("Product is ");
	printf("%d\n", prod);
	printf("Smallest is ");
	printf("%d\n", min);
	printf("Largest is ");
	printf("%d\n", max);
	return 0;
}
