#include<stdio.h>
#include<ctype.h>
#include<string.h>

char input[1<<18];
int mark;

void cin(){
    fgets(input, 1<<18, stdin);
}

int main(){
    while(1){
        cin();
        int len = strlen(input);
        if(input[0] == '0' && len == 2) break;
        int ans = 0;
        mark = 0;
        for(int i=0;i<len;i++){
            if(input[i] == ' ' || input[i] == '\n'){
                ans++;
                if(!isalpha(input[mark])) ans--;
                mark = i+1;
            } 
        }
        //if(ans == 0 && isalpha(input[0])) ans++;
        printf("%d\n", ans);
    }
}