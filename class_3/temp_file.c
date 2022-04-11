
#include<stdio.h>

int main(){
    int number;
    printf("Enter your number\n");
    scanf("%d",&number);
    if(number%2==0){
        printf("You are above 90,you cannot drive");      //if (age!=90) This means age is NOT equal to 90
    }
    else{
        printf("You can drive\n");
    }

    return 0;
}