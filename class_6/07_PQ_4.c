// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include<stdio.h>
void sumAverage(int x , int y, int *sum , float *average);

int main(){
    int a,b,sum;
    float average;
    a = 3;
    b = 4;
    sumAverage(a,b,&sum,&average);
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %f\n",average);


    return 0;
}

void sumAverage(int x , int y, int *sum , float *average){
    *sum = x + y;
    *average = *sum/2;
}


