// Write a c program to check whether a given  number is odd or even


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if ( 1 & n)
        printf("Odd\n");
    else{
        printf("Even\n");
    }
    return 0;
}


