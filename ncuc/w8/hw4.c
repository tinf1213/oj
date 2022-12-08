#include<stdio.h>
#include<string.h>

char input[1<<18];
int len;

void cin(){
    fgets(input, 1<<18, stdin);
}

bool verify(char *temp, int len_temp){
    int cnt = 0;
    for(int i=0;i<=len-len_temp;i++){
        bool flag = 1;
        for(int k=0;k<len_temp;k++){
            if(temp[k] != input[i+k]){
                flag = 0;
                break;
            } 
        }
        if(flag) cnt++;
    }
    if(cnt==1) return 1;
    return 0;
}

int main(){
    while(1){
        cin();
        len = strlen(input);
        len--;
        bool flag= 0;
        if(len == 1 && input[0] == '0') break;
        for(int i=2;i<=len;i++){
            char temp[i];
            for(int j=0;j<=len-i;j++){
                for(int k=0;k<i;k++) temp[k] = input[j+k];
                if(verify(temp, i)){
                    flag = 1;
                    break;
                }
            }    
            if(flag){
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}