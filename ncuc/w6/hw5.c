#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cnt = 0;
int n;
int high[1<<18];

void init_high(int n){
	high[0] = -1;
	high[n+1] = -1;
	for(int i=0;i<n;i++){
		int temp; scanf("%d", &temp);
		high[i+1]= temp;
	}
}

int mean(int *high){
	high++;
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum += *high;
		high++;
	}	
	return sum / n;
}

void move(int *high, int m){
	high++;
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans += (*high - m);
	}	
	output(ans);
}

void output(int ans){
	printf("Set #%d\n", cnt);
	printf("The minimum number of moves is ");
	printf("%d.\n", ans);
}

int main(){
	while(1){
		cnt++;
		scanf("%d", &n);
		if(n == 0) break;
		init_high(n);
		int m = mean(high);
		move(high, m);
	}
	return 0;
}
