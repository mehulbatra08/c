//C program to check whether a number is even or odd.

// #First of all we need to understand of the concept of the binary language 
// i.e that in the binary language If the Least significant number is 1 it odd and if it 0 then it is even for example :

// 1	1
// 2	10
// 3	11
// 4	100
// 5	101
// 6	110
// 7	111
// 8	1000    here the last digit is 0 it is even
// 9	1001    here the last digit is 1 it is odd and so and so....
// 10	1010
// 11	1011
// 12	1100




#include<stdio.h>

int checkOddEven( int n){
    return(n & 1); //Here & is an bitwise operator which means
                    // (1,1) = 1 (1,0) = 0 , (0,1)=0 , (0,0) = 0
}

int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);

    if(checkOddEven(n)){
        printf("The number entered is odd");
    }
    else{
        printf("The number entered is even");
    }
    return 0;
}