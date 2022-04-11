// Write a program to calculate the factorial of a given number using for loop

#include<stdio.h>

int main(){
    int i,n,factorial=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial = factorial * i;

        printf("The value of Factorial of %d is %d\n",n,factorial);

    }
    return 0;
}






