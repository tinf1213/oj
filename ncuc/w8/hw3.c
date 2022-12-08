#include<stdio.h>
#include<string.h>
int n;
char input[1<<18];
int len = 0;
int len_era = 0;

void cin(){
    fgets(input, 1<<18, stdin);
    len = strlen(input);
    len--;
}

int main(){
    while(1){
        scanf("%d", &len_era);
        int start = 0;
        if(len_era == 0) break;
        cin();
        n = (len)/len_era;
        char ans[len];
        for(int i=0;i<n;i++){
            for(int j=0;j<len_era;j++) ans[j+i*len_era] = input[(i+1)*len_era-j-1];
        }
        for(int i=0;i<len;i++){
            printf("%c", ans[i]);
        }
        printf("\n");
    }
}