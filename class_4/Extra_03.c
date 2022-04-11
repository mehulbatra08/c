// Write a program in C to display n terms of natural number and their sum


#include<stdio.h>

int main(){
    int a,n;
    int sum = 0;
    printf("Enter The value of n\n");
    scanf("%d",&n);
    for(int a = 0 ; a<=n ; a++){
        printf("The value of n is %d \n", a);
        sum = sum + a ;

    }
    printf("The sum of first n integers is %d", sum);
    return 0;
}


