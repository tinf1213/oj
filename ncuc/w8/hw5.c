#include<stdio.h>
#include<string.h>
#include<ctype.h>

char input[1<<18];
int cnt[26];

void cin(){
    fgets(input, 1<<18, stdin);
}

int main(){
    int n; scanf("%d", &n);
    for(int i=0;i<26;i++) cnt[i] = 0;
    for(int i=0;i<n+1;i++){
        cin();
        int len = strlen(input);
        len--;
        for(int j=0;j<len;j++){
            if(isalpha(input[j])){
                input[j] = toupper(input[j]);
                cnt[(int)(input[j]) - 65]++;
            }
        }
    }
    int max = -1;
    for(int i=0;i<26;i++){
        if(cnt[i] > max) max = cnt[i];
    }
    for(int i=max;i>0;i--){
        for(int j=0;j<26;j++){
            if(cnt[j] == i) printf("%c %d\n", (char)(j+65), i);
        }
    }
}