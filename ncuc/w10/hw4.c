#include<stdio.h>

int power2(int* n, int* m){
	return *n<<*m;
}

void displayBits(int n){
	int cnt = 0;
	for(int i=31;i>=0;i--){
		printf("%u", n>>i & 1);
		cnt++;
		if(cnt % 8 == 0) printf(" ");
	}
	printf("\n");
}	
	
int main(){
	int n, m; 
	scanf("%d%d", &n, &m);
	int ans = power2(&n ,&m);
	printf("%4d = ", n);
	displayBits(n);
	printf("%4d = ", ans);
	displayBits(ans);
	return 0;
}
