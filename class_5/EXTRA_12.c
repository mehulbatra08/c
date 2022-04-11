// We have to write a recursive function that will calculate and return the sum of total amount of EVEN numbers in a sequence read a sequence of integers from the user.. up until -1.

#include <stdio.h>
int SumEven(int n){
    int sum = 0;

    printf("Please enter the sequence\n");
    scanf("%d",&n);

    if(n == -1){
        return 0;

    }
    sum = sum + n;
    if(n%2 == 0){
        return sum + SumEven(n);
    }
    return SumEven(n);
    
    
}


int main(){
    int number;
    int FinalSum;

    FinalSum = SumEven(number);

    printf("%d",FinalSum);

    return 0; 
}
