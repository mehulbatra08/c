// Write a c program to count the digits of a given number using recursion.
// ********Doubt with The logic *******


#include<stdio.h>

int main(){
    int n , count = 0;

    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0){
    n = n/10;
    count ++;

    
    }

    printf("The number of digits are %d\n",count); 
    return 0;
}


