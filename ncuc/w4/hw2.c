#include<stdio.h>

int main(){
	float arr[6];
	arr[1] = 2.98;
	arr[2] = 4.50;
	arr[3] = 9.98;
	arr[4] = 4.49;
	arr[5] = 6.87;
	int n, m;
	scanf("%d%d", &n, &m);
	float ans = arr[n]*m;
	printf("%.2f\n", ans);
	return 0;
}
