#include<stdio.h>
int num1,num2,sum;
void addNumber(num1 , num2){
    sum = num1 + num2 ;
    printf("The sum of %d and %d is %d \n", num1,num2,sum);
}


int main(){

    addNumber(8,10);
    
    return 0;
}


