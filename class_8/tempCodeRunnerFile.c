// Write a program that initialises an array of digits of your phone number.
// The program should find the maximum digit and print it to the screen


#include<stdio.h>

int main(){
    int i;
    int array[3];
    int number;
    int max;

    for(i=0;i<3;i++){
        printf("Enter the %dth digit of your phone number\n",i+1);
        scanf("%d",&number);
    }
    max = array[0];

    for(i=0;i<3;i++){
        if(max>array[i]){
            max = array[i];
        }
    }
    printf("%d",max);


    return 0;
}


