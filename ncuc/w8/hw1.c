#include<stdio.h>
#include<ctype.h>
#include<string.h>

char input[1<<18];
void cin(){
    fgets(input, 1<<18, stdin);
}

int main(){
    int time = 0;
    while(1){
        if(time==10) break;
        cin();
        int cnt[52];
        for(int i=0;i<52;i++) cnt[i] = 0;
        if(input[0] == '0') break;
        int len = strlen(input);
        if(len == 1){
            printf("%d\n", 1);
            continue;
        }
        //printf("%d\n", len);
        for(int i=0;i<len;i++){
            if(isupper(input[i])) cnt[(int)(input[i])-65+26]++;
            else cnt[(int)(input[i])-97]++;
        }
        int ans = 0;
        int max = 0;
        for(int i=0;i<52;i++){
            if(cnt[i] % 2 == 0) ans += cnt[i];
            if(cnt[i] % 2 != 0 && cnt[i] > max) max = cnt[i];
        }
        ans += max;
        printf("%d\n", ans);
        time++;
    }
    return 0;
}