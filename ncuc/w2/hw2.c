#include<stdio.h>
#include<string.h>
#include<math.h>
signed main(){
    int target;
    scanf("%d", &target);
    for(int i=4;i>=0;i--){
    	int p = pow(10, i);
    	int temp = target / p;
    	target %= p;
		printf("%d ", temp);
	}
	printf("\n");
    return 0;
}
