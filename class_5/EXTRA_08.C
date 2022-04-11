// Write a c program to find the sum  of the digits using recursion

#include<stdio.h>

int DigitSum(int num);

int main(){
    int n, final;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    final = DigitSum(n);
    printf("The sum of the digits are %d",final);

    return 0;
}

int DigitSum(int num){

    if(num == 0){
        return 0;
    
    }
    else{
        return((num%10) + DigitSum(num/10));
    }

}


