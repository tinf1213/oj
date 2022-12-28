#include<stdio.h>
int main(){
	int n; scanf("%d", &n);
	int row = n / 703;
	printf("%d-", row+1);
	int col = n % 702;
	if(col == 0){
		printf("%s", "ZZ")	;
	}
	else{
		if(col <= 26) printf("%c\n", (char)(col+64));
		else {
			printf("%c", (char)(col/26+64));
			col %= 26;
			printf("%c\n", (char)(col+64));
		}
	}
	return 0;
}
