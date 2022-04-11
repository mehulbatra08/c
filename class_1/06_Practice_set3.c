// Write a program to convert celcius(centigrate degree temperature to farenheit)
// (0°C × 9/5) + 32 = 32°F



#include<stdio.h>

int main(){
    float c,f;
    printf("what is the temperature in celcius?");
    scanf("%f",&c);
    f = (c*9/5) + 32;
    printf("The value of temperature in farenheit is%f",f);



    return 0;

}

