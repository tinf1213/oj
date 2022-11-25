#include<stdio.h>
const long long LN = 1<<18;
int arr[1<<18];
int fibonacci(int n){
	for(int i=2;i<=n;i++){
		arr[i] = (arr[i-1] + arr[i-2]);
	}
	printf("%d\n", arr[n]);
}

int main(){
	int n;
	scanf("%d", &n);
	arr[0] = 0;
	arr[1] = 1;
	fibonacci(n);
	return 0;
}
