#include<stdio.h>

int move(int n, int s, int e, int t){
	int n_new, s_new, e_new, t_new;
	if(n != 1){
		n_new = n - 1;
		e_new = t;
		s_new = s;
		t_new = e;
		move(n_new, s_new, e_new, t_new);
		printf("%d -> %d\n", s, e);
		move(n_new, t, e, s);
	}
	else{
		printf("%d -> %d\n", s, e);
	}
}

int main(){
	int n;
	int temp;
	scanf("%d", &n);
	move(n, 1, 3, 2);	
	return 0;
}
