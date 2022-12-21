#include<stdio.h>

int main(){
        printf("Please input the temperature (Fahrenheit)：");
        float input; scanf("%f", &input);
        float c =  5 * (input-32) / 9;
        printf("%+10.3f°F\n", input);
        printf("%+10.3f°C\n", c);
        return 0;
}
