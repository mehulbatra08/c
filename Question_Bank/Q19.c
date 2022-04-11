// Write a c program to accept 2 integers and check whether they are equal or not.

#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter First numbers\n");
    scanf("%d",&a);
    printf("Enter Second number\n");
    scanf("%d",&b);
    if(a==b){
        printf("They are equal");
    }

    else{
        printf("They are not equal\n");
    }
  
    
    return 0;
}


