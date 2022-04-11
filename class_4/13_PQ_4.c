// Write a c program to find the sum of first 10 natural numbers using while loop


#include<stdio.h>

int main(){
    int i=1,n=10,sum=0;
    while(i<=n){
        sum = sum + i;
        i++;
        
    }
    printf("The value of sum is %d \n",sum);
    return 0;
}


