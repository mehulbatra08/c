// Write a program to print first n natural numbers using to do while loop.


#include<stdio.h>

int main(){
    int n,i = 0;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    do{
       printf("The value of first n natural numbers are %d\n",i);
       i++;
       
    }
    while(i<=n);
    return 0;
}


