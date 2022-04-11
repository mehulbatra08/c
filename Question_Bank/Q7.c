// Find the maximum and the minimum number between the two numbers


#include<stdio.h>


void findBigger(int a , int b){
    if(a>b){
        printf("%d is BIG",a);

    }
    else{
        printf("%d is BIGG",b);

    }
}

int main(){
    int a,b; 

    printf("Enter the value of a\n ");
    scanf("%d",&a);
    printf("Enter the value of B\n");
    scanf("%d",&b);

    findBigger(a,b);
    



    return 0;
}


