// Write a program to sum first ten natural numbers 

#include<stdio.h>

int main(){
    int i,n=10,sum = 0;
    for(i=0;i<=n;i++)
    {
        sum = sum + i;

    }
    printf("The value of sum is %d",sum);
    return 0;
}


