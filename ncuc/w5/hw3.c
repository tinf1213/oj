#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int cnt = 0;

void ret(int res){
	srand(time(NULL));
	int r = rand() % 4 + 1;
	if (res == 1){
		switch (r){
			case 1:
				printf("Very good!\n");
				break;
			case 2:
				printf("Excellent!\n");
				break;
			case 3:
				printf("Nice work!\n");
				break;
			case 4:
				printf("Keep up the good work!\n");
				break;
		}
	}
	else{
		switch (r){
			case 1:
				printf("No. Please try again.\n");
				break;
			case 2:
				printf("Wrong. Try once more.\n");
				break;
			case 3:
				printf("Don’t give up!\n");
				break;
			case 4:
				printf("No. Keep trying.\n");
				break;
		}
	
	}
}

void func(int* a,  int* b){
        srand(time(NULL));
        *a = rand() % 9 + 1;
        *b = rand() % 9 + 1;
        printf("How much is %d times %d?\n", *a, *b);
        int ans;
        scanf("%d", &ans);
        if(ans == *a * *b){
                cnt++;
                ret(1);
        }
        else{
                ret(0);
        }
}

int main(){
	for(int i=0;i<10;i++){
		int a, b;
		func(&a, &b);
		//printf("%d\n", a);		
	}
	if (cnt >=8) printf("Congratulations, you are ready to go to the next level!\n");
	else{
		printf("Please ask your teacher for extra help.\n");
	return 0;

	}
}
