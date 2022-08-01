// Write a program in C to find the sum of all elements of the array.

#include<stdio.h>

int main(){
    int a[5];
    int i;
    int sum = 0;
    printf("Enter the values of arrays\n");
    
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }

    printf("The Sum of arrays are\n");
    
    for(i=0;i<=4;i++){
        sum = sum + a[i] ;
    }
    printf("%d",sum);


    

    return 0;
}


