// Write a function that has 2 digits if it has more than 2 digits then throw an error and if there are two digits then mention the maximum digit value for example if you mention 56 then 6 is the maximum digit.
#include<stdio.h>


void maxDigit(int num){
    if(num>99 || num<10){
        printf("Error! The given value is not a two digit number \n");

    }
    else{
        if(num%10 > num/10){
            printf("The maximum digit is %d", num%10);

        }
        else{
            printf("The maximum digit is %d", num/10);
        }
    }
}



int main(){
    int number;
    printf("Enter the two digit number\n");
    scanf("%d", &number);
maxDigit(number);
    

    

    
    return 0;
}









