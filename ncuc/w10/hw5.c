#include<stdio.h>

union uni{
	char c;
	short s;
	int i;
	long b;
};

int main(){
	/*
	 為甚麼沒事要用ref呢? 因為point 打成 arrow 懶得改一堆 乾脆直接 ref
	 */

	union uni un;
	union uni *u = &un;
	printf("輸入型別char...\n");
	scanf("%c", &un.c);	
	printf("char:%c\n", u->c);
        printf("short:%d\n", (short)u->c);
        printf("int:%d\n", (int)u->c);
        printf("long:%ld\n", (long)u->c);
	printf("輸入型別short...\n");
	scanf("%hd", &un.s);
	printf("char:%c\n", (char)u->s);
        printf("short:%d\n", u->s);
        printf("int:%d\n", (int)u->s);
        printf("long:%ld\n", (long)u->s);
	printf("輸入型別int...\n");
	scanf("%d", &un.i);
	printf("char:%c\n", (char)u->i);
        printf("short:%d\n", (short)u->i);
        printf("int:%d\n", u->i);
        printf("long:%ld\n", (long)u->i);
	printf("輸入型別long...\n");
	scanf("%ld", &un.b);
	printf("char:%c\n", (char)u->b);
        printf("short:%d\n", (short)u->b);
        printf("int:%d\n", (int)u->b);
        printf("long:%ld\n", u->b);
	return 0;
}
