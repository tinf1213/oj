#include<stdio.h>
#include<string.h>

char input[1<<18];
int len;

void output(){
	for(int i=0;i<len;i++) printf("%c", input[i]);
}

void spaces(){
	for(int i=0;i<20-len-2;i++) printf(" ");
}

int main(){
	fgets(input, 1<<18, stdin);
	len = strlen(input) - 1;
	printf("\"");
	output();
	printf("\"\n");
	printf("\\");
	spaces();
	output();
	printf("\\\n");
	printf("\\");
	output();
	spaces();
        printf("\\\n");
	return 0;
}
