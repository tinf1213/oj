#include<stdio.h>
int main(){
	int line[3];
	for(int i=0;i<3;i++){
		int temp;
		scanf("%d" ,&temp);
		line[i] = temp;
	}
	sorted(line, line+3);
	return 0;
}
