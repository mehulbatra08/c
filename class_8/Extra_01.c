// Write a program in C to store elements in an array and print it.

#include<stdio.h>

int main(){
    int arr[10];
    int i;

  
    for(i=0;i<10;i++){
        printf("Value of %d is : ",i);
        scanf("%d",&arr[i]);
    }

    printf("Elements in array are : \n");
    for(i=0; i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}








