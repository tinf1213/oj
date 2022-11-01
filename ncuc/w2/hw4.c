#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n%2 == 0) printf("%f\n", pow(n, 2));
	else printf("%d\n", n);
	return 0;
}
